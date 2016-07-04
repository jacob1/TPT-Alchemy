#include "simulation/Simulation.h"
#include "gui/game/Achievement.h"

bool Achievement::checkCompletion(Simulation * sim) {
	for (std::vector<int>::iterator it = requiredElements.begin(); it < requiredElements.end(); it++)
		if (!sim->elementsAcquired[*it])
			return false;
	return true;
}

BasicAchievement::BasicAchievement() {
	title = "First steps!";
	text = "Congratulations, you made the first elements!";
	requiredElements.push_back(PT_H2);
	requiredElements.push_back(PT_IRON);
	requiredElements.push_back(PT_SALT);
	requiredElements.push_back(PT_DSTW);
}

DiamondAchievement::DiamondAchievement() {
	requiredElements.push_back(PT_DMND);
	requiredElements.push_back(PT_GOLD);
	title = "Gettin' rich";
	text = "Wow, you are now rich. Joke. But you made DMND and GOLD!";
}

ElectronicsAchievement::ElectronicsAchievement() {
        requiredElements.push_back(PT_ARAY);
        requiredElements.push_back(PT_BRAY);
        requiredElements.push_back(PT_BTRY);
        requiredElements.push_back(PT_CRAY);
        requiredElements.push_back(PT_DRAY);
        requiredElements.push_back(PT_EMP);
        requiredElements.push_back(PT_ETRD);
        requiredElements.push_back(PT_INSL);
        requiredElements.push_back(PT_INST);
        requiredElements.push_back(PT_INWR);
        requiredElements.push_back(PT_METL);
        requiredElements.push_back(PT_NSCN);
        requiredElements.push_back(PT_NTCT);
        requiredElements.push_back(PT_PSCN);
        requiredElements.push_back(PT_PTCT);
        requiredElements.push_back(PT_SPRK);
        requiredElements.push_back(PT_SWCH);
        requiredElements.push_back(PT_TESC);
        requiredElements.push_back(PT_TUNG);
        requiredElements.push_back(PT_WIFI);
        requiredElements.push_back(PT_WIRE);
	title = "Beep-bloop!";
	text = "You have acquired all the electronic elements! 1010 10110101!";
}

ExplosivesAchievement::ExplosivesAchievement() {
        requiredElements.push_back(PT_BANG);
        requiredElements.push_back(PT_BOMB);
        requiredElements.push_back(PT_C5);
        requiredElements.push_back(PT_CFLM);
        requiredElements.push_back(PT_DEST);
        requiredElements.push_back(PT_EMBR);
        requiredElements.push_back(PT_FIRE);
        requiredElements.push_back(PT_FIRW);
        requiredElements.push_back(PT_FSEP);
        requiredElements.push_back(PT_FUSE);
        requiredElements.push_back(PT_FWRK);
        requiredElements.push_back(PT_GUNP);
        requiredElements.push_back(PT_IGNT);
        requiredElements.push_back(PT_LIGH);
        requiredElements.push_back(PT_LRBD);
        requiredElements.push_back(PT_NITR);
        requiredElements.push_back(PT_PLEX);
        requiredElements.push_back(PT_RBDM);
        requiredElements.push_back(PT_THDR);
        requiredElements.push_back(PT_THRM);
	title = "Kaboom!";
	text = "You have gathered all the explosive elements!";
}


NuclearAchievement::NuclearAchievement() {
	requiredElements.push_back(PT_ISOZ);
	requiredElements.push_back(PT_ISZS);
        requiredElements.push_back(PT_DEUT);
        requiredElements.push_back(PT_URAN);
        requiredElements.push_back(PT_PLUT);
        requiredElements.push_back(PT_NEUT);

	title = "Science!";
	text = "You found all the nuclear elements. But please be careful though :)";
}

ExotAchievement::ExotAchievement() {
	requiredElements.push_back(PT_EXOT);
	title = "Yotredwop!";
	text = "EXOT is sure pretty weird";
}

StickmanAchievement::StickmanAchievement() {
	requiredElements.push_back(PT_STKM);
	requiredElements.push_back(PT_STKM2);
	requiredElements.push_back(PT_FIGH);
	title = "Hey!";
	text = "You got all the Stickmen!";
}

PortalAchievement::PortalAchievement() {
	requiredElements.push_back(PT_PRTI);
	requiredElements.push_back(PT_PRTO);
	title = "Woosh!";
	text = "You have portals now.";
}

ExtraAchievement::ExtraAchievement() {
	requiredElements.push_back(PT_116);
	requiredElements.push_back(PT_LOVE);
	requiredElements.push_back(PT_LOLZ);
	requiredElements.push_back(PT_MORT);
	title = "WAIT, HOW?!";
	text = "You found a way to make all the extra elements! How?!";
}

AllAchievement::AllAchievement() {
        requiredElements.push_back(PT_ACEL);
        requiredElements.push_back(PT_ACID);
        requiredElements.push_back(PT_AMTR);
        requiredElements.push_back(PT_ANAR);
        requiredElements.push_back(PT_ARAY);
        requiredElements.push_back(PT_BANG);
        requiredElements.push_back(PT_BCLN);
        requiredElements.push_back(PT_BCOL);
        requiredElements.push_back(PT_BGLA);
        requiredElements.push_back(PT_BHOL);
        requiredElements.push_back(PT_BIZR);
        requiredElements.push_back(PT_BIZRG);
        requiredElements.push_back(PT_BIZRS);
        requiredElements.push_back(PT_BMTL);
        requiredElements.push_back(PT_BOMB);
        requiredElements.push_back(PT_BOYL);
        requiredElements.push_back(PT_BRCK);
        requiredElements.push_back(PT_BREC);
        requiredElements.push_back(PT_BRMT);
        requiredElements.push_back(PT_BTRY);
        requiredElements.push_back(PT_BVBR);
        requiredElements.push_back(PT_C5);
        requiredElements.push_back(PT_CAUS);
        requiredElements.push_back(PT_CBNW);
        requiredElements.push_back(PT_CFLM);
        requiredElements.push_back(PT_CLNE);
        requiredElements.push_back(PT_CLST);
        requiredElements.push_back(PT_CNCT);
        requiredElements.push_back(PT_CO2);
        requiredElements.push_back(PT_COAL);
        requiredElements.push_back(PT_CONV);
        requiredElements.push_back(PT_CRAY);
        requiredElements.push_back(PT_CRMC);
        requiredElements.push_back(PT_DCEL);
        requiredElements.push_back(PT_DESL);
        requiredElements.push_back(PT_DEST);
        requiredElements.push_back(PT_DEUT);
        requiredElements.push_back(PT_DLAY);
        requiredElements.push_back(PT_DMG);
        requiredElements.push_back(PT_DMND);
        requiredElements.push_back(PT_DRAY);
        requiredElements.push_back(PT_DRIC);
        requiredElements.push_back(PT_DSTW);
        requiredElements.push_back(PT_DTEC);
        requiredElements.push_back(PT_DUST);
        requiredElements.push_back(PT_ELEC);
        requiredElements.push_back(PT_EMP);
        requiredElements.push_back(PT_ETRD);
        requiredElements.push_back(PT_EXOT);
        requiredElements.push_back(PT_FIGH);
        requiredElements.push_back(PT_FILT);
        requiredElements.push_back(PT_FIRE);
        requiredElements.push_back(PT_FIRW);
        requiredElements.push_back(PT_FOG);
        requiredElements.push_back(PT_FRAY);
        requiredElements.push_back(PT_FRME);
        requiredElements.push_back(PT_FRZW);
        requiredElements.push_back(PT_FRZZ);
        requiredElements.push_back(PT_FSEP);
        requiredElements.push_back(PT_FUSE);
        requiredElements.push_back(PT_FWRK);
        requiredElements.push_back(PT_GAS);
        requiredElements.push_back(PT_GBMB);
        requiredElements.push_back(PT_GEL);
        requiredElements.push_back(PT_GLAS);
        requiredElements.push_back(PT_GLOW);
        requiredElements.push_back(PT_GOLD);
        requiredElements.push_back(PT_GOO);
        requiredElements.push_back(PT_GPMP);
        requiredElements.push_back(PT_GRAV);
        requiredElements.push_back(PT_GRVT);
        requiredElements.push_back(PT_GUNP);
        requiredElements.push_back(PT_H2);
        requiredElements.push_back(PT_HSWC);
        requiredElements.push_back(PT_ICEI);
        requiredElements.push_back(PT_IGNT);
        requiredElements.push_back(PT_INSL);
        requiredElements.push_back(PT_INST);
        requiredElements.push_back(PT_INVIS);
        requiredElements.push_back(PT_INWR);
        requiredElements.push_back(PT_IRON);
        requiredElements.push_back(PT_ISOZ);
        requiredElements.push_back(PT_ISZS);
        requiredElements.push_back(PT_LAVA);
        requiredElements.push_back(PT_LCRY);
        requiredElements.push_back(PT_LIGH);
        requiredElements.push_back(PT_LNTG);
        requiredElements.push_back(PT_LO2);
        requiredElements.push_back(PT_LOLZ);
        requiredElements.push_back(PT_LOVE);
        requiredElements.push_back(PT_LRBD);
        requiredElements.push_back(PT_MERC);
        requiredElements.push_back(PT_METL);
        requiredElements.push_back(PT_MORT);
        requiredElements.push_back(PT_MWAX);
        requiredElements.push_back(PT_NBHL);
        requiredElements.push_back(PT_NBLE);
        requiredElements.push_back(PT_NEUT);
        requiredElements.push_back(PT_NICE);
        requiredElements.push_back(PT_NITR);
        requiredElements.push_back(PT_NONE);
        requiredElements.push_back(PT_NSCN);
        requiredElements.push_back(PT_NTCT);
        requiredElements.push_back(PT_NWHL);
        requiredElements.push_back(PT_O2);
        requiredElements.push_back(PT_OIL);
        requiredElements.push_back(PT_PBCN);
        requiredElements.push_back(PT_PCLN);
        requiredElements.push_back(PT_PHOT);
        requiredElements.push_back(PT_PIPE);
        requiredElements.push_back(PT_PLEX);
        requiredElements.push_back(PT_PLNT);
        requiredElements.push_back(PT_PLSM);
        requiredElements.push_back(PT_PLUT);
        requiredElements.push_back(PT_PPIP);
        requiredElements.push_back(PT_PQRT);
        requiredElements.push_back(PT_PROT);
        requiredElements.push_back(PT_PRTI);
        requiredElements.push_back(PT_PRTO);
        requiredElements.push_back(PT_PSCN);
        requiredElements.push_back(PT_PSNS);
        requiredElements.push_back(PT_PSTE);
        requiredElements.push_back(PT_PSTN);
        requiredElements.push_back(PT_PTCT);
        requiredElements.push_back(PT_PUMP);
        requiredElements.push_back(PT_PVOD);
        requiredElements.push_back(PT_QRTZ);
        requiredElements.push_back(PT_RBDM);
        requiredElements.push_back(PT_RIME);
        requiredElements.push_back(PT_RPEL);
        requiredElements.push_back(PT_SALT);
        requiredElements.push_back(PT_SAND);
        requiredElements.push_back(PT_SHLD1);
        requiredElements.push_back(PT_SING);
        requiredElements.push_back(PT_SLTW);
        requiredElements.push_back(PT_SMKE);
        requiredElements.push_back(PT_SNOW);
        requiredElements.push_back(PT_SOAP);
        requiredElements.push_back(PT_SPNG);
        requiredElements.push_back(PT_SPRK);
        requiredElements.push_back(PT_STKM);
        requiredElements.push_back(PT_STKM2);
        requiredElements.push_back(PT_STNE);
        requiredElements.push_back(PT_STOR);
        requiredElements.push_back(PT_SWCH);
        requiredElements.push_back(PT_TESC);
        requiredElements.push_back(PT_THDR);
        requiredElements.push_back(PT_THRM);
        requiredElements.push_back(PT_TRON);
        requiredElements.push_back(PT_TSNS);
        requiredElements.push_back(PT_TTAN);
        requiredElements.push_back(PT_TUNG);
        requiredElements.push_back(PT_URAN);
        requiredElements.push_back(PT_VIBR);
        requiredElements.push_back(PT_VINE);
        requiredElements.push_back(PT_VIRS);
        requiredElements.push_back(PT_VOID);
        requiredElements.push_back(PT_WARP);
        requiredElements.push_back(PT_WATR);
        requiredElements.push_back(PT_WAX);
        requiredElements.push_back(PT_WHOL);
        requiredElements.push_back(PT_WIFI);
        requiredElements.push_back(PT_WIRE);
        requiredElements.push_back(PT_WOOD);
        requiredElements.push_back(PT_WTRV);
        requiredElements.push_back(PT_YEST);
	title = "Congratulations!";
	text = "You have managed to get all the elements available!\n"
	"Hereby, we note that you are officially considered to have completed this game.\n"
	"Good luck and best wishes! Have fun!\n"
	"\n"
	"- \bosavask\bg, \boSopaXorzTaker\bg, \boand others\bg.";
}


