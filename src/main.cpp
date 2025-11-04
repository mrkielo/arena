#include "../h/enemy.h"
#include "../h/player.h"
#include "../h/utils.h"
#include <sstream>
#include <iostream>

using namespace std;

void DrawFightUI(Player player, Enemy enemy, bool shouldWait = false);
void Fight(Player player, Enemy enemy);
void DrawMainUI();
void MainUI();
void Armoury();

void DrawMainUI()
{
    Utils::clear();
    cout << "1) Arena" << endl;
    cout << "2) Armoury" << endl;
    cout << "3) Training" << endl;
    cout << "4) Shop" << endl;
    cout << "5) Exit" << endl;
}

void MainUI()
{
    DrawMainUI();
    char x;
    cin >> x;

    switch (x)
    {
    case '1':
        cout << "Arena:";
        getchar();
        break;
    case '2':
        cout << "Armoury:";
        getchar();
        break;
    case '3':
        cout << "Training:";
        getchar();
        break;
    case '4':
        cout << "Shop:";
        getchar();
        break;
    case '5':
        cout << "Exit:";
        getchar();
        break;

    default:
        cout << "Error";
        getchar();
        MainUI();
        break;
    }
}

void DrawArmoury()
{
}
void Armoury()
{
}

int main()
{
    bool isPlaying = true;
    Player player = Player(100, 10);
    player.SetName();

    Enemy enemy = Enemy(75, 5, "Goblin");
    Utils::clear();
    MainUI();
    // Fight(player, enemy);

    return 0;
}
