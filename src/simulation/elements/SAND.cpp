#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_SAND PT_SAND 44
Element_SAND::Element_SAND()
{
	Identifier = "DEFAULT_PT_SAND";
	Name = "SAND";
	Colour = PIXPACK(0xFFD090);
	MenuVisible = 0;
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
	Description = "Sand, Heavy particles. Melts into glass.";

	Properties = TYPE_PART;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 1973.0f;
	HighTemperatureTransition = PT_LAVA;

	Update = &Element_SAND::update;
}

//#TPT-Directive ElementHeader Element_SAND static int update(UPDATE_FUNC_ARGS)
int Element_SAND::update(UPDATE_FUNC_ARGS)
{
	int r, rx, ry;
	int dustc = 0, watrc = 0;
	int dustid, watrid;

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
				if((r&0xFF) == PT_WATR)
				{
					watrc++;
					watrid = r>>8;
				}
			}

	if(dustc && watrc)
	{
		sim->create_part(i, x, y, PT_GOO);
		sim->kill_part(dustid);
		sim->kill_part(watrid);
		return 1;
	}

	return Element_ETRD::craft_with(UPDATE_FUNC_SUBCALL_ARGS, PT_EXOT, PT_116);
}

Element_SAND::~Element_SAND() {}
