#include "../h/enemy.h"
#include "../h/player.h"
#include "../h/utils.h"
#include<sstream>;
#include<iostream>;

using namespace std;

void DrawFightUI(Player player, Enemy enemy, string message = "", bool shouldWait = false);
void Fight(Player player, Enemy enemy);

int main()
{
    Player player = Player(100, 10);
    player.SetName();

    Enemy enemy;

    enemy.m_hp = 100;
    enemy.m_attack = 5;

    Fight(player, enemy);

    return 0;
}
