

#include <iostream>

// 배열에 쓰이는 글자 수를 세어라.
int StringCount(char* _Arr)
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

// 배열 내의 글자를 변경해라.
void ChangeCh(char* _Arr, char _PrevCh, char _NextCh)
{
    if (nullptr == _Arr)
    {
        return;
    }

    int i = 0;
    while (_Arr[i++])
    {
        if (_Arr[i] == _PrevCh)
        {

            _Arr[i] = _NextCh;

        }

    }

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

