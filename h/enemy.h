#include <string>
#include "../h/warrior.h"
class Enemy : public Warrior
{
public:
	Enemy(int hp, int attack, std::string name);
};
