

#include <iostream>


int StringCount(char* _Arr)

{
    int ChCount = 0;
    while (_Arr[ChCount])
    {
        ++ChCount;
    }

    return ChCount;
}


void ChangeCh(char* _Arr, char _PrevCh, char _NextCh)
{

    _PrevCh = _NextCh;
    _Arr[8] = _PrevCh;
    _Arr[9] = _PrevCh;
    _Arr[10] = _PrevCh;

    return;
}

int main()
{
    // 한글 들어가지 않습니다.
    {
        char Arr[100] = "aaaaa";
        // 5이 나와야 합니다.
        // 글자수를 세는 함수입니다.
        int Result = StringCount(Arr);

        int a = 0;
    }

    {
        char Arr[100] = "aaa bbb ccc";



        // "aaa bbb ccc"; => "aaa bbb ddd";
        ChangeCh(Arr, 'c', 'd');

        int a = 0;
    }


}

