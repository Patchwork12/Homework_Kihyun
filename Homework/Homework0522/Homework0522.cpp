// HomeWork0520.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h> // 키를 누를때까지 기다리는 함수

// 숙제 1 -- 문자의 오른쪽끝을 맞춰오세요. 이름은 알파뱃만
// fasdhjkfasdhjfkasd--------
// Monster-------------------
// 위와같이 UI의 끝부분이 맞게 만들어라.

// 숙제 2 -- 실시간으로 만들어오세요.
// 데미지 메세지가 나오는순간 체력이 곧바로 감소되게 만들어라.
// 화면 지우는 함수 화면에 출력하는 함수를 잘 생각해보세요.
// 그냥 무식하게 생각해라.

// 숙제 3 -- 누군가 죽었다. 누군가의 Hp가 0이 된순간 종료.


// 상태와 개념을 하나로 묶어서 내가 인간적인 생각을 문법으로 표현한다.
// 이걸 객체지향의 특성이 추상화라고 합니다.

// 몬스터와 플레이어가 서로 한대씩 때리면서
// 한명이 죽으면 끝납니다.
// 지금 그걸 그래픽으로 표현할 방법이 없으니까.
// 글자로 표현하겠습니다.

int StringCount(const char* _Arr)
{
    if (nullptr == _Arr)
    {
        return -1;
    }

    int ChCount = 0;
    while (_Arr[ChCount])
    {
        ++ChCount;
    }

    return ChCount;
}


void ChangeCh(char* _Arr, char* _TargetCh)
{
    if (nullptr == _Arr || nullptr == _TargetCh)
    {
        return;
    }


    int Count = StringCount(_TargetCh);

    while (_Arr[Count--])
    {
        if (_Arr[Count] > 0)
        {
            
            _Arr[Count] = _TargetCh[Count];
        

        }

    }

    return;
}

void StatusRender(const char* const _Name, int _Att, int _Hp)
{
    if (nullptr == _Name)
    {
        return;
    }


    printf_s("%s\n", _Name);
    printf_s("공격력 : %d\n", _Att);
    printf_s("체  력 : %d\n", _Hp);
    printf_s("---------------------------------------\n");
}

void DamagePrint(const char* const _AttName, const char* const _DefName, int _Att)
{
    printf_s("%s가 %s를 공격했습니다.\n", _AttName, _DefName);
    printf_s("%s는 %d의 데미지를 입었습니다.\n", _DefName, _Att);
}

void Damage(int& _Hp, int _Att)
{
    _Hp -= _Att;
}



int main()
{
    
   
    int PlayerHp = 100;
    int PlayerAtt = 15;
    char PlayerName[40] = "송현지천재";



    int MonsterHp = 100;
    int MonsterAtt = 11;
    char MonsterName[40] = "Monster";


    char PlayerNamePrint[40] = "---------------------------------------";
    char MonsterNamePrint[40] = "---------------------------------------";


    {

        ChangeCh(PlayerNamePrint, PlayerName);
        ChangeCh(MonsterNamePrint, MonsterName);

        int a = 0;
    }



    while (true)
    {

        system("cls");

        StatusRender(PlayerNamePrint, PlayerAtt, PlayerHp);
        StatusRender(MonsterNamePrint, MonsterAtt, MonsterHp);

        _getch();


        system("cls");
        Damage(MonsterHp, PlayerAtt);

        StatusRender(PlayerNamePrint, PlayerAtt, PlayerHp);
        StatusRender(MonsterNamePrint, MonsterAtt, MonsterHp);

        DamagePrint(PlayerName, MonsterName, PlayerAtt);

        if (MonsterHp <= 0) 
        {

            system("cls");
            MonsterHp = 0;
            StatusRender(PlayerNamePrint, PlayerAtt, PlayerHp);
            StatusRender(MonsterNamePrint, MonsterAtt, MonsterHp);

            DamagePrint(PlayerName, MonsterName, PlayerAtt);
            printf_s("\n----%s가 사망했습니다.----\n", MonsterName);
            return 0;
        }


        _getch();


        system("cls");
        Damage(PlayerHp, MonsterAtt);

        StatusRender(PlayerNamePrint, PlayerAtt, PlayerHp);
        StatusRender(MonsterNamePrint, MonsterAtt, MonsterHp);

        DamagePrint(PlayerName, MonsterName, PlayerAtt);
        DamagePrint(MonsterName, PlayerName, MonsterAtt);


        if (PlayerHp <= 0)
        {

            system("cls");
            PlayerHp = 0;
            StatusRender(PlayerNamePrint, PlayerAtt, PlayerHp);
            StatusRender(MonsterNamePrint, MonsterAtt, MonsterHp);

            DamagePrint(PlayerName, MonsterName, PlayerAtt);
            DamagePrint(MonsterName, PlayerName, MonsterAtt);
            printf_s("\n----%s가 사망했습니다.----\n", PlayerName);
            return 0;
        }

        _getch();



        int a = 0;




    }
}
