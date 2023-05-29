#include "Global.h"


static const int LineCount1 = 40;

int StringCount(const char* _Arr)
{

	int ChCount = 0;
	while (_Arr[ChCount])
	{
		++ChCount;
	}

	return ChCount;
}