#pragma once
#include <iostream>
#include <conio.h>
#include "int4.h"

class ConsoleScreen;
class int4;

class Unit
{
public:

    Unit();

    int4 GetPos() const
    {
        return Pos;
    }

    void AddPos(const int4& _Pos);

    void SetPos(const int4& _Pos);



    Unit(const Unit&) = delete;




protected:

private:



    int4 Pos;
};
