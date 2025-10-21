#include "../h/player.h"

void Player::SetName()
{
  std::cout << "Enter hero name:\n";
  std::cin >> Player::m_name;
}
