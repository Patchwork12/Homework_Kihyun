#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "int4.h"
#include "ConsoleScreen.h"
#include "Player.h"
#include "Wall.h"
#include "Unit.h"
#include "GameManager.h"
#include "Bullet.h"



void GameManager::SetGame()
{

    Screen.Init('-');


    MainPlayer.SetPos({ 10, 5 });


    int Count = 0;

    //벽 생성
    for (int i = 0; i < 5; i++)
    {
        int4 WallPos = { 5 + Count, i };
        Walls[i].SetPos(WallPos);
    }


    while (true)
    {
        //플레이어 생성
        Screen.Clear();
        Screen.SetPixel(MainPlayer.GetPos(), 'a');


        //벽 생성2
        for (int i = 0; i < 5; i++)
        {
            int4 tempinitPos = { 0,0 };
            if (Walls[i].GetPos() == tempinitPos)
            {
                continue;
            }
            Screen.SetPixel(Walls[i].GetPos(), '#');
        }

        //총알 생성


        for (int i = 0; i < 10; i++)
        {
            if (true == Bullets[i].OnBullet)
            {
                Screen.SetPixel(Bullets[i].GetPos(), '*');
                Bullets[i].MoveBullet();
                HitBullet();

            }

        }

        Screen.Print();

        //화면 초기화
        if (0 != _kbhit())
        {
            GameManager::Input();

        }
       // 0.1초 동안 정지합니다. 
        Sleep(100);

        int a = 0;
    }

}

void GameManager::BulletShoot()
{
    int4 SetBullet = { 0, 0 };
    SetBullet = MainPlayer.GetPos();

    for (int i = 0; i < 10; i++)
    {
        if (false == Bullets[i].OnBullet)
        {
            Bullets[i].SetPos(SetBullet);
            Screen.SetPixel(Bullets[i].GetPos(), '*');
            Bullets[i].OnBullet = true;
            break;
        }

    }

    int a = 0;
}

void GameManager::HitBullet()
{
    for (int i = 0; i < 10; i++)
    {
        int4 TemBulletPos = Bullets[i].GetPos();
        for (int j = 0; j < 10; j++)
        {
            if (TemBulletPos == Walls[j].GetPos())
            {
                int4 tempInitpos = { 0, 0 };
                Screen.SetPixel(Walls[j].GetPos(), '-');
                Walls[j].SetPos(tempInitpos);
                Bullets[i].OnBullet = false;

                break;
            }
        }
    }
}


void GameManager::Input()
{
    char Select = (char)_getch();


    int4 MovePos = { 0, 0 };


    switch (Select)
    {
    case 'a':
    {
        MovePos = Left;


        break;
    }
    case 'd':
    {
        MovePos = Right;

        break;
    }
    case 'w':
    {

        MovePos = Up;

        break;
    }

    case 's':
    {
        MovePos = Down;
        break;
    }

    case ' ':
    {
        BulletShoot();
        break;
    
    }
    default:
        break;
    }

    int4 TempPlayerPos = MainPlayer.GetPos() + MovePos;

    for (int i = 0; i < 10; i++)
    {


        if (TempPlayerPos == Walls[i].GetPos())
        {
            MovePos = Stop;
            break;
        }

        int a = 0;

    }


    if (false == Screen.IsScreenOut(MainPlayer.GetPos() + MovePos))
    {


        MainPlayer.AddPos(MovePos);

        int a = 0;
    }

    int a = 0;
}
