// ConsoleGame.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>
#include "int4.h"
#include "ConsoleScreen.h"
#include "Player.h"
#include "Wall.h"
#include "Unit.h"
#include "GameManager.h"

// 1. 파일 정리
// 2. 10개의 장애물 배치 class Wall
//    Player 
//    Wall 
//    같은 클래스를 상속받아서 만들어져야 한다.
// 
// 3. 장애물을 통과 못하게 하기.




int main()
{
    GameManager NewGame;
    NewGame.SetGame();
    //ConsoleScreen Screen;
    //Screen.Init('*');

    //Player MainPlayer;
    //MainPlayer.SetPos({ 10, 5 });

    //Wall Walls[10];
    //while (true)
    //{
    //    Screen.Clear();
    //    Screen.SetPixel(MainPlayer.GetPos(), 'a');


    //    for (size_t i = 0; i < 5; i++)
    //    {

    //        // int4 WallPos = PtrWall.GetPos();
    //        // int4 WallPos = ArrWall[i].GetPos();
    //        int4 WallPos = { 5 + Count, i };
    //        Screen.SetPixel(WallPos, '0');
    //    }
    //    // ++Count;

    //    Screen.Print();

    //    if (0 != _kbhit())
    //    {
    //        MainPlayer.Input(&Screen);

    //        // 1000이면 1초입니다.
    //    }
    //    // 1초 동안 정지합니다.
    //    Sleep(200);
    //}


    //while (true)
    //{
    //    Screen.Clear();
    //    Screen.SetPixel(MainPlayer.GetPos(), 'a');
    //    Screen.Print();

    //    MainPlayer.Input(&Screen);
    //}


}
