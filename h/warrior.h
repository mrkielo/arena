#pragma once
#include <iostream>

class Warrior
{
public:
	int m_hp;
	int m_attack;
	std::string m_name;
	Warrior(int hp, int attack, std::string name);
	Warrior(int hp, int attack);
};
