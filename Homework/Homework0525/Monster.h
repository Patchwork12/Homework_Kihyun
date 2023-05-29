#pragma once


class FighterZone;
class Player;



class Monster
{
public:

	Monster();



	void StatusRender();

	void DamagePrint(const char* const _AttName, int _Att); 
	void Damage(int _Att);


	const char* GetName();

	int GetAtt();

	bool IsDeath();



	char Name[40];
	int Att;
	int Hp;
	const int LineCount;

	int StringCount(const char* _Arr);
};






