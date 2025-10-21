#include "../h/enemy.h"
#include "../h/player.h"
#include "../h/utils.h"
#include<sstream>

using namespace std;

void DrawFightUI(Player player, Enemy enemy, string message = "",bool shouldWait = false)
{
  Utils::clear();
  cout << "------------------\t\t----------------\n";
  cout << "-- Player HP:" << player.m_hp << "--\t\t-- Enemy HP:" << enemy.m_hp<< "--\n";
  if (message != "")
  {
  	cout << "------------------\t\t----------------\n";
  }
  cout << "-- " << message << " --";
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

        ostringstream oss;
        oss << "Player hit enemy for: " << player.m_attack;
        DrawFightUI(player, enemy, oss.str(), 1);

        if (enemy.m_hp <= 0)
        {
            break;
        }

        player.m_hp -= enemy.m_attack;
        oss.clear();
        oss << "Enemy hit player for: " << enemy.m_attack;
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
