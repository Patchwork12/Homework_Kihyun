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


}
