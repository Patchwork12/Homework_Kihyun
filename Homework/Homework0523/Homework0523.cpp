﻿// HomeWork0523.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Test
{
public:
    // 100
    int A;
    // ?????
    __int64 B;
    char C;
    char D;
    short E; // 2바이트 정수입니다.
    int F;
};

// 1 2 4 8

class Player
{
public:

    int HP = 0;
    __int64 Speed = 0;
    int ATT = 0;

};

//  [H][H][H][H][A][A][A][A] //  [T][T][T][T][][][][]
void TestFunction(Player _Newplayer, int _Test)
{

    __int64 Address1 = (__int64)&_Newplayer.HP; //7993212
    __int64 Address2 = (__int64)&_Newplayer.Speed; //7993220
    __int64 Address3 = (__int64)&_Newplayer.ATT; //7993228
    __int64 Address4 = (__int64)&_Test; //7993236

    // 이것도 확인해보세요.
    int a = 0;
}

int main()
{
    size_t Size = sizeof(Test);
    // [A][A][A][A][][][][] [B][B][B][B][B][B][B][B] [C][D][E][E][F][F][F][F]

    Test NewTest;

    __int64 Address0 = (__int64)&NewTest.A; //16448688
    __int64 Address1 = (__int64)&NewTest.B; //16448696
    __int64 Address2 = (__int64)&NewTest.C; //16448704
    __int64 Address3 = (__int64)&NewTest.D; //16448705
    __int64 Address4 = (__int64)&NewTest.E; // 16448706
    __int64 Address5 = (__int64)&NewTest.F; // 16448708


    Player NewPlayer;
    TestFunction(NewPlayer, 20);

    int a = 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
