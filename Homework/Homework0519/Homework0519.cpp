// HomeWork0519.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//int ChCount = 0;
//while (_string[ChCount])
//{
//    ++ChCount;
//}

//널 체크
//if (nullptr == _string)
//{
//  reuturn -1;
//}


//A가 몇개인지 세어서 숫자로 리턴해라.
int ChCount(const char* const _string, char Ch)
{

    int ChCount = 0;

    for (int i = 0; _string[i] != 0; i++)
    {

        if (_string[i] == Ch)
        {

            ++ChCount;

        }

    }

    return ChCount;
}

//공백을 지워서 출력해라
void TrimDelete(char* _string)
{
    if (nullptr == _string)
    {
        return;
    }

    char ChangeCh[256] = {};
    int Count = 0;

    for (int i = 0; _string[i] != 0; i++)
    {

        if (_string[i] != ' ')
        {

            ChangeCh[Count++] = _string[i];

        }

    }

    Count = 0;

    while (ChangeCh[Count] != 0)
    {

        _string[Count] = ChangeCh[Count];
            ++Count;

    }
    _string[Count] = 0;


    return;
}

//8이 리턴되게 만들어라.
int DigitsCount(int _Number)
{
    if (_Number <= 0)
    {
        return 0;
    }

    int Count = 1;

    while (_Number >= 10)
    {

        _Number /= 10;
        ++Count;

    }

    return Count;
}

// 오른쪽 배열에 왼쪽 배열을 복사해서 넣어라
void StrCopy(const char* const _Left, char* _Right)
{
    if (nullptr == _Left || nullptr == _Right)
    {
        return;
    }

    int i = 0;

    while (_Left[i] != 0)
    {

        _Right[i] = _Left[i];
        ++i;

    }


    return;
}

// 숫자를 글자로 변환해서 출력해라.
void NumberToString(int _Number, char* _Right)
{
    if (nullptr == _Right)
    {
        return;
    }

    if (_Number <= 0)
    {
        return;
    }

    int Count = DigitsCount(_Number);

    while (Count > 0)
    {

        --Count;
        _Right[Count] = _Number % 10 + '0';
        _Number /= 10;


    }



    return;
}


int main()
{
    // 4가 리턴되어야 합니다.
    // 문자열의 마지막에 들어가는 0은 글자로 치지 않습니다.
    {
        int Result = ChCount("ab aaa ccc ddd eee", 'a');

        int a = 0;
    }

    {
        char Arr[256] = "aa  b  c dd ee";

        TrimDelete(Arr);


        // Arr "aabcddee"
        int a = 0;
    }

    {
        // 8이 리턴되게 만들어라.
        int Result = DigitsCount(23847469);

        int a = 0;
    }

    {
    
        char ArrCopyText[256] = {};

        StrCopy("aaaa bbb ccc", ArrCopyText);

        int a = 0;
    }
    
    {
        char Result[256] = {};

        // Result = "312312";
        
        NumberToString(312312, Result);

        int a = 0;
    }


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
