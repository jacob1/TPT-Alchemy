#ifndef ACHIEVEMENT_H
#define ACHIEVEMENT_H

#include "simulation/Simulation.h"

#define ACHIEVEMENT_BASIC 0
#define ACHIEVEMENT_DIAMOND 1
#define ACHIEVEMENT_ELECTRONICS 2
#define ACHIEVEMENT_EXPLOSIVES 3
#define ACHIEVEMENT_NUCLEAR 4
#define ACHIEVEMENT_EXOT 5
#define ACHIEVEMENT_PORTAL 6
#define ACHIEVEMENT_STICKMAN 7
#define ACHIEVEMENT_EXTRA 8
#define ACHIEVEMENT_ALL 9
#define ACHIEVEMENT_SPECIAL 10
#define ACHIEVEMENT_GOL 11
#define ACHIEVEMENT_DELICATE 12
#define ACHIEVEMENT_AMTR 13
#define ACHIEVEMENT_CRAFTING 14
#define ACHIEVEMENT_YEST 15
#define ACHIEVEMENT_NITR 16

#define ACHIEVEMENT_TOTAL 17

using namespace std;

class Achievement {
	public:
		bool checkCompletion(Simulation * sim);

		std::string title;
		std::string text;
		std::vector<int> requiredElements;
};

class BasicAchievement: public Achievement {public: BasicAchievement();};
class DiamondAchievement: public Achievement {public: DiamondAchievement();};
class ElectronicsAchievement: public Achievement {public: ElectronicsAchievement();};
class ExplosivesAchievement: public Achievement {public: ExplosivesAchievement();};
class NuclearAchievement: public Achievement {public: NuclearAchievement();};
class ExotAchievement: public Achievement {public: ExotAchievement();};
class PortalAchievement: public Achievement {public: PortalAchievement();};
class StickmanAchievement: public Achievement {public: StickmanAchievement();};
class ExtraAchievement: public Achievement {public: ExtraAchievement();};
class AllAchievement: public Achievement {public: AllAchievement();};
class SpecialAchievement: public Achievement {public: SpecialAchievement();};
class GOLAchievement: public Achievement {public: GOLAchievement();};
class DelicateAchievement: public Achievement {public: DelicateAchievement();};
class AMTRAchievement: public Achievement {public: AMTRAchievement();};
class CraftingAchievement: public Achievement {public: CraftingAchievement();};
class YESTAchievement: public Achievement {public: YESTAchievement();};
class NITRAchievement: public Achievement {public: NITRAchievement();};

static Achievement* Achievements[] = {
	new BasicAchievement(), new DiamondAchievement(), new ElectronicsAchievement(),
	new ExplosivesAchievement(), new NuclearAchievement(), new ExotAchievement(),
	new PortalAchievement(), new StickmanAchievement(), new ExtraAchievement(),
	new AllAchievement(), new SpecialAchievement(), new GOLAchievement(),
	new DelicateAchievement(), new AMTRAchievement(), new CraftingAchievement(),
	new YESTAchievement(), new NITRAchievement()
};

#endif
