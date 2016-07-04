#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_LAVA PT_LAVA 6
Element_LAVA::Element_LAVA()
{
	Identifier = "DEFAULT_PT_LAVA";
	Name = "LAVA";
	Colour = PIXPACK(0xE05010);
	MenuVisible = 0;
	MenuSection = SC_LIQUID;
	Enabled = 1;

	Advection = 0.3f;
	AirDrag = 0.02f * CFDS;
	AirLoss = 0.95f;
	Loss = 0.80f;
	Collision = 0.0f;
	Gravity = 0.15f;
	Diffusion = 0.00f;
	HotAir = 0.0003f	* CFDS;
	Falldown = 2;

	Flammable = 0;
	Explosive = 0;
	Meltable = 0;
	Hardness = 2;

	Weight = 45;

	Temperature = R_TEMP+1500.0f+273.15f;
	HeatConduct = 60;
	Description = "Molten lava. Ignites flammable materials. Generated when metals and other materials melt, solidifies when cold.";

	Properties = TYPE_LIQUID|PROP_LIFE_DEC;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = MAX_TEMP;// check for lava solidification at all temperatures
	LowTemperatureTransition = ST;
	HighTemperature = ITH;
	HighTemperatureTransition = NT;

	Update = &Element_LAVA::update;
	Graphics = &Element_LAVA::graphics;
}

//#TPT-Directive ElementHeader Element_LAVA static int update(UPDATE_FUNC_ARGS)
int Element_LAVA::update(UPDATE_FUNC_ARGS)
{
	if(parts[i].ctype == PT_STNE && (parts[i].temp >= 1500 + O_CELS) && i%10 == 0)
		parts[i].ctype = PT_IRON;

	int r, rx, ry;
	for (rx=-1; rx<2; rx++)
		for (ry=-1; ry<2; ry++)
			if (BOUNDS_CHECK && (rx || ry))
			{
				r = pmap[y+ry][x+rx];
				if (!r)
					continue;

				if(parts[i].type == PT_LAVA)
				{
					switch(parts[i].ctype)
					{
						case PT_IRON:
							if(parts[i].temp >= 5000 + O_CELS &&
									(r&0xFF) == PT_LAVA && parts[r>>8].ctype == PT_METL)
							{
								parts[i].ctype = PT_TTAN;
								sim->kill_part(r>>8);
							}
							else if((r&0xFF) == PT_LAVA && parts[r>>8].ctype == PT_NSCN)
							{
								parts[i].ctype = PT_NTCT;
								sim->kill_part(r>>8);
							}
							else if((r&0xFF) == PT_LAVA && parts[r>>8].ctype == PT_PSCN)
							{
								parts[i].ctype = PT_PTCT;
								sim->kill_part(r>>8);
							}
							else if((r&0xFF) == PT_LAVA && parts[r>>8].ctype == PT_IRON)
							{
								parts[i].ctype = PT_TUNG;
								sim->kill_part(r>>8);
							}
							break;
						case PT_METL:
							if((r&0xFF) == PT_MWAX)
							{
								parts[i].ctype = PT_INWR;
								sim->kill_part(r>>8);
							}
							break;
						case PT_GLAS:
							if((r&0xFF) == PT_SAND)
							{
								parts[i].ctype = PT_QRTZ;
								sim->kill_part(r>>8);
							}
							else if((r&0xFF) == PT_BREC)
							{
								parts[i].ctype = PT_FILT;
								sim->kill_part(r>>8);
							}
							break;
						case PT_CLST:
							if(parts[i].temp >= 1400 + O_CELS && (r&0xFF) == PT_SAND)
							{
								parts[i].ctype = PT_CNCT;
								sim->kill_part(r>>8);
							}
							break;
						case PT_INST:
							if(parts[i].temp >= 5000 + O_CELS && (r&0xFF) == PT_SAND)
							{
								if(rand()%2)
									parts[i].ctype = PT_PSCN;
								else
									parts[i].ctype = PT_NSCN;

								sim->kill_part(r>>8);
							}
							break;
						case PT_NSCN:
							if((r&0xFF) == PT_LAVA && parts[r>>8].ctype == PT_PSCN)
							{
								parts[i].ctype = PT_SWCH;
								sim->kill_part(r>>8);
							}
							break;
						default:
							break;
					}
				}
			}

	Element_FIRE::update(UPDATE_FUNC_SUBCALL_ARGS);
	return 0;
}

//#TPT-Directive ElementHeader Element_LAVA static int graphics(GRAPHICS_FUNC_ARGS)
int Element_LAVA::graphics(GRAPHICS_FUNC_ARGS)

{
	*colr = cpart->life * 2 + 0xE0;
	*colg = cpart->life * 1 + 0x50;
	*colb = cpart->life / 2 + 0x10;
	if (*colr>255) *colr = 255;
	if (*colg>192) *colg = 192;
	if (*colb>128) *colb = 128;
	*firea = 40;
	*firer = *colr;
	*fireg = *colg;
	*fireb = *colb;
	*pixel_mode |= FIRE_ADD;
	*pixel_mode |= PMODE_BLUR;
	//Returning 0 means dynamic, do not cache
	return 0;
}


Element_LAVA::~Element_LAVA() {}
