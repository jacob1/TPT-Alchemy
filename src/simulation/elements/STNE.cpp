#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_STNE PT_STNE 5
Element_STNE::Element_STNE()
{
	Identifier = "DEFAULT_PT_STNE";
	Name = "STNE";
	Colour = PIXPACK(0xA0A0A0);
	MenuVisible = 1;
	MenuSection = SC_POWDERS;
	Enabled = 1;

	Advection = 0.4f;
	AirDrag = 0.04f * CFDS;
	AirLoss = 0.94f;
	Loss = 0.95f;
	Collision = -0.1f;
	Gravity = 0.3f;
	Diffusion = 0.00f;
	HotAir = 0.000f	* CFDS;
	Falldown = 1;

	Flammable = 0;
	Explosive = 0;
	Meltable = 5;
	Hardness = 1;

	Weight = 90;

	Temperature = R_TEMP+0.0f	+273.15f;
	HeatConduct = 150;
	Description = "Heavy particles. Meltable.";

	Properties = TYPE_PART;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 983.0f;
	HighTemperatureTransition = PT_LAVA;

	Update = &Element_STNE::update;
}

//#TPT-Directive ElementHeader Element_STNE static int update(UPDATE_FUNC_ARGS)
int Element_STNE::update(UPDATE_FUNC_ARGS)
{
	int r, rx, ry;
	int dustc = 0, saltc = 0;
	int dustid, saltid;

	for (rx=-1; rx<2; rx++)
		for (ry=-1; ry<2; ry++)
			if (BOUNDS_CHECK && (rx || ry))
			{
				r = pmap[y+ry][x+rx];
				if(!r)
					continue;

				if((r&0xFF) == PT_DUST)
				{
					dustc++;
					dustid = r>>8;
				}

				if((r&0xFF) == PT_SALT)
				{
					saltc++;
					saltid = r>>8;
				}

				if(parts[i].type == PT_STNE)
				{
					if((r&0xFF) == PT_WATR)
					{	
						if((parts[i].temp >= 50+O_CELS) && i%20 == 0)
						{
							sim->create_part(i, x, y, PT_SALT);
							return 1;
						}
						if((sim->pv[y/CELL][x/CELL] > 2.0f) && i%10 == 0)
						{
							sim->create_part(i, x, y, PT_SAND);
							return 1;
						}
					}
				}
			}

	if(parts[i].type == PT_STNE && dustc && saltc)
	{
		sim->create_part(i, x, y, PT_CLST);
		sim->kill_part(dustid);
		sim->kill_part(saltid);
		return 1;
	}

	return 0;
}

Element_STNE::~Element_STNE() {}
