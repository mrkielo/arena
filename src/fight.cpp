#include "../h/enemy.h"
#include "../h/player.h"
#include "../h/utils.h"
#include <sstream>

using namespace std;

void DrawFightUI(Player player, Enemy enemy, bool shouldWait = false)
{
    Utils::clear();
    cout << "------------------\t\t----------------\n";
    cout << "-- " << player.m_name << " HP:" << player.m_hp << "--\t\t-- " << enemy.m_name << " HP:" << enemy.m_hp << "--\n";

    if (shouldWait)
    {
        cin.get();
    }
}
void Fight(Player player, Enemy enemy)
{
    while (player.m_hp > 0 && enemy.m_hp > 0)
    {
        enemy.m_hp -= player.m_attack;
        DrawFightUI(player, enemy, true);
        if (enemy.m_hp <= 0)
        {
            break;
        }

        player.m_hp -= enemy.m_attack;
        DrawFightUI(player, enemy, true);
    }
    if (player.m_hp <= 0)
    {
        cout << "Player died";
    }
    else
    {
        cout << "Enemy died";
    }
}
