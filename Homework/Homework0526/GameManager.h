#include <iostream>
#include <conio.h>
#include "int4.h"
#include "ConsoleScreen.h"
#include "Player.h"
#include "Wall.h"
#include "Unit.h"
#include "Bullet.h"



class GameManager
{
public:

    void SetGame();

    void Input();

    void BulletShoot();

    void HitBullet();



private:

    Player MainPlayer;
    ConsoleScreen Screen;
    Wall Walls[10];
    Bullet Bullets[10];

};

