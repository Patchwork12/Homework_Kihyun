#include "Player.h"
#include "Monster.h"
#include <iostream>
#include <conio.h>




Monster::Monster()
	:Name("monster"), Att(9), Hp(100), LineCount(40)
{

}
	void Monster::StatusRender()
	{
		int Count = 0;

		Count = StringCount(Name);

		printf_s("%s", Name);

		for (size_t i = 0; i < LineCount - Count; i++)
		{
			printf_s("-");
		}
		printf_s("\n");

		printf_s("공격력 : %d\n", Att);
		printf_s("체  력 : %d\n", Hp);
		for (size_t i = 0; i < LineCount; i++)
		{
			printf_s("-");
		}

		printf_s("\n");

	}

	void Monster::DamagePrint(const char* const _AttName, int _Att)
	{
		printf_s("%s가 %s를 공격했습니다.\n", _AttName, Name);
		printf_s("%s는 %d의 데미지를 입었습니다.\n", Name, _Att);
	}

	void Monster::Damage(int _Att)
	{
		Hp -= _Att;
	}

	const char* Monster::GetName()
	{
		return Name;
	}

	int Monster::GetAtt()
	{   
		return Att;
	}

	bool Monster::IsDeath()
	{
		return Hp <= 0;
	}



	int Monster::StringCount(const char* _Arr)
	{

		int ChCount = 0;
		while (_Arr[ChCount])
		{
			++ChCount;
		}

		return ChCount;
	}
