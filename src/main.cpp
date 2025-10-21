#include "../h/enemy.h"
#include "../h/player.h"
#include "../h/utils.h"
#include <sstream>
#include <iostream>

using namespace std;

void DrawFightUI(Player player, Enemy enemy, bool shouldWait = false);
void Fight(Player player, Enemy enemy);

int main()
{
    Player player = Player(100, 10);
    player.SetName();

    Enemy enemy = Enemy(50, 5, "Goblin");

    Fight(player, enemy);

    return 0;
}
