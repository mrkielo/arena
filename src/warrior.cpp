#include "../h/warrior.h"

Warrior::Warrior(int hp, int attack, std::string name) : m_hp{hp}, m_attack{attack}, m_name{name} {}
Warrior::Warrior(int hp, int attack) : m_hp{hp}, m_attack{attack} {}
