#include <iostream>
#include "../h/warrior.h"

class Player : public Warrior
{
public:
  using Warrior::Warrior;
  void SetName();
};
