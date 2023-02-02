#include "windows.h"
#include <stdio.h>
#include <iostream>
#include "Enemy.h"
using namespace std;

int Enemy::enemyCount;

int main()
{
    Enemy* enemy1 = new Enemy;
    Enemy* enemy2 = new Enemy;
    Enemy* enemy3 = new Enemy;

    cout << Enemy::enemyCount << endl;



    while (Enemy::enemyCount > 0)
    {

        cout << " enemyCount = " << Enemy::enemyCount << endl;

        Sleep(3 * 1000);
        enemy1->StaDeath();


        cout << " enemyCount = " << Enemy::enemyCount << endl;
    }

    delete enemy1;
    delete enemy2;
    delete enemy3;

    return 0;

}