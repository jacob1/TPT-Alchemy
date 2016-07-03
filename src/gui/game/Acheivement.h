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

#define ACHEIVEMENT_COUNT 10

using namespace std;

class Acheivement {
	public:
		Acheivement();
		~Acheivement();

		bool checkCompletion(Simulation * sim);

		std::string title;
		std::string text;
		std::vector<int> requiredElements;
};

class BasicAcheivement: public Acheivement {public: BasicAcheivement();};
class DiamondAcheivement: public Acheivement {public: DiamondAcheivement();};
class ElectronicsAcheivement: public Acheivement {public: ElectronicsAcheivement();};
class ExplosivesAcheivement: public Acheivement {public: ExplosivesAcheivement();};
class NuclearAcheivement: public Acheivement {public: NuclearAcheivement();};
class ExotAcheivement: public Acheivement {public: ExotAcheivement();};
class PortalAcheivement: public Acheivement {public: PortalAcheivement();};
class StickmanAcheivement: public Acheivement {public: StickmanAcheivement();};
class ExtraAcheivement: public Acheivement {public: ExtraAcheivement();};
class AllAcheivement: public Acheivement {public: AllAcheivement();};


#endif
