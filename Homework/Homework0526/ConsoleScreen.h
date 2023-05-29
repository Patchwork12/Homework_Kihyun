#pragma once
#include <iostream>
#include "int4.h"
#include "GlobalConst.h"


class ConsoleScreen
{
public:
    ConsoleScreen()
    {

    }

    void Init(char _BaseCh);

    void SetPixel(const int4& _Pos, char _Ch);

    void Clear();

    bool IsScreenOut(const int4& _Pos);


    void Print() const;

protected:


private:
    char BaseCh = ' ';
    char ArrScreen[YLine][XLine + 1] = {};
};