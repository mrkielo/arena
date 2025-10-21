#include <iostream>

class Player {
public:
  int m_hp;
  int m_attack;
  std::string m_name;

  Player(int hp, int attack);

  void SetName();
};
