#include "../h/player.h"

Player::Player(int hp, int attack) : m_hp{hp}, m_attack{attack} {}

void Player::SetName() {
  std::cout << "Enter hero name:\n";
  std::cin >> Player::m_name;
}
