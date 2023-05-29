#include "Unit.h"
#include "int4.h"
#include "ConsoleScreen.h"

class int4;


Unit::Unit()
{


}


void Unit::AddPos(const int4& _Pos)
{
    Pos += _Pos;
}


void Unit::SetPos(const int4& _Pos)
{

    Pos = _Pos;
}



