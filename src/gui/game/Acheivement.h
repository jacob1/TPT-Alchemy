#ifndef ACHEIVEMENT_H
#define ACHEIVEMENT_H

#define ACHEIVEMENT_BASIC 1
#define ACHEIVEMENT_DIAMOND 2
#define ACHEIVEMENT_ELECTRONICS 3
#define ACHEIVEMENT_EXPLOSIVES 4
#define ACHEIVEMENT_NUCLEAR 5
#define ACHEIVEMENT_EXOT 6
#define ACHEIVEMENT_PORTAL 7
#define ACHEIVEMENT_EXTRA 8
#define ACHEIVEMENT_ALL 9

// TODO - make stuff object oriented

const char* achievementBasicTitle = "First steps!";
const char* achievementBasicText = "Congratulations, you made the first elements!";

const char* achievementElectronicsTitle = "Beep-bloop!";
const char* achievementElectronicsText = "You have acquired all the electronic elements! 1010 10110101!";

const char* achievementDiamondTitle = "Gettin' rich";
const char* achievementDiamondText = "Wow, you are now rich. Joke. But you made DMND!";

const char* achievementExplosivesTitle = "Kaboom!";
const char* achievementExplosivesText = "You have gathered all the explosive elements!";

const char* achievementNuclearTitle = "Science!";
const char* achievementNuclearText = "You found all the nuclear elements. But please be careful though :)";

const char* achievementExotTitle = "Yotredwop!";
const char* achievementExotText = "EXOT is sure pretty weird";

const char* achievementPortalTitle = "Woosh!";
const char* achievementPortalText = "You have portals now.";

const char* achievementExtraTitle = "WAIT, HOW?!";
const char* achievementExtraText = "You found a way to make all the extra elements! How?!";

const char* achievementAllTitle = "Congratulations!";
const char* achievementAllText = "You have managed to get all the elements available!\n"
	"Hereby, we note that you have officially considered to have completed this game.\n"
	"Good luck and best wishes! Have fun!\n"
	"\n"
	"- \bosavask\bg, \boSopaXorzTaker\bg, \boand others\bg.";

//TODO

int basicElements[] = {

};

int extraElements[] = {

};

// excluding extra
int allElements[] = {

};

#endif
