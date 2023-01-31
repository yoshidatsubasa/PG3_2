#include "windows.h"
#include <stdio.h>
#include <iostream>
#include "Enemy.h"
using namespace std;

int Enemy::IsAlive;

int main()
{
    Enemy* enemy1 = new Enemy;
    Enemy* enemy2 = new Enemy;
    Enemy* enemy3 = new Enemy;

    cout << Enemy::IsAlive << endl;



    while (Enemy::IsAlive > 0)
    {

        cout << " IsAlive = " << Enemy::IsAlive << endl;

        Sleep(3 * 1000);
        enemy1->StaDeath();


        cout << " IsAlive = " << Enemy::IsAlive << endl;
    }

    return 0;

}