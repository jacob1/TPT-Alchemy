#ifndef ACHEIVEMENT_H
#define ACHEIVEMENT_H

#include "simulation/Simulation.h"

#define ACHEIVEMENT_BASIC 0
#define ACHEIVEMENT_DIAMOND 1
#define ACHEIVEMENT_ELECTRONICS 2
#define ACHEIVEMENT_EXPLOSIVES 3
#define ACHEIVEMENT_NUCLEAR 4
#define ACHEIVEMENT_EXOT 5
#define ACHEIVEMENT_PORTAL 6
#define ACHEIVEMENT_STICKMAN 7
#define ACHEIVEMENT_EXTRA 8
#define ACHEIVEMENT_ALL 9

#define ACHEIVEMENT_TOTAL 10

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

static Achievement* Achievements[] = {
	new BasicAchievement(), new DiamondAchievement(), new ElectronicsAchievement(),
	new ExplosivesAchievement(), new NuclearAchievement(), new ExotAchievement(),
	new PortalAchievement(), new StickmanAchievement(), new ExtraAchievement(),
	new AllAchievement()
};

#endif
