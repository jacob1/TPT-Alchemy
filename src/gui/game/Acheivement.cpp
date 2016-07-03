#include "simulation/Simulation.h"
#include "gui/game/Acheivement.h"

bool Acheivement::checkCompletion(Simulation * sim) {
	for (std::vector<int>::iterator it = requiredElements.begin(); it < requiredElements.end(); it++)
		if (!sim->elementsAcquired[*it])
			return false;
	return true;
};

BasicAcheivement::BasicAcheivement() {
	title = "First steps!";
	text = "Congratulations, you made the first elements!";
};

DiamondAcheivement::DiamondAcheivement() {
	requiredElements.push_back(PT_DMND);
	requiredElements.push_back(PT_GOLD);
        title = "Gettin' rich";
        text = "Wow, you are now rich. Joke. But you made DMND and GOLD!";
};

ElectronicsAcheivement::ElectronicsAcheivement() {
	// TODO requiredElements
        title = "Beep-bloop!";
        text = "You have acquired all the electronic elements! 1010 10110101!";
};

ExplosivesAcheivement::ExplosivesAcheivement() {
        // TODO requiredElements
        title = "Kaboom!";
        text = "You have gathered all the explosive elements!";
};


NuclearAcheivement::NuclearAcheivement() {
	// TODO requiredElements
        title = "Science!";
        text = "You found all the nuclear elements. But please be careful though :)";
};

ExotAcheivement::ExotAcheivement() {
	requiredElements.push_back(PT_EXOT);
        title = "Yotredwop!";
        text = "EXOT is sure pretty weird";
};

StickmanAcheivement::StickmanAcheivement() {
	requiredElements.push_back(PT_STKM);
	requiredElements.push_back(PT_STKM2);
	requiredElements.push_back(PT_FIGH);
        title = "Hey!";
        text = "You got all the Stickmen!";
};

PortalAcheivement::PortalAcheivement() {
	requiredElements.push_back(PT_PRTI);
	requiredElements.push_back(PT_PRTO);
        title = "Woosh!";
        text = "You have portals now.";
};

ExtraAcheivement::ExtraAcheivement() {
	requiredElements.push_back(PT_116);
	requiredElements.push_back(PT_LOVE);
	requiredElements.push_back(PT_LOLZ);
	requiredElements.push_back(PT_MORT);
        title = "WAIT, HOW?!";
        text = "You found a way to make all the extra elements! How?!";
};

AllAcheivement::AllAcheivement() {
	// TODO requiredElements
        title = "Congratulations!";
        text = "You have managed to get all the elements available!\n"
        "Hereby, we note that you are officially considered to have completed this game.\n"
        "Good luck and best wishes! Have fun!\n"
        "\n"
        "- \bosavask\bg, \boSopaXorzTaker\bg, \boand others\bg.";
};


