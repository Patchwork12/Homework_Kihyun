#include "Bullet.h"
#include "Wall.h"
#include "int4.h"
#include "Bullet.h"
#include "ConsoleScreen.h"
#include "GameManager.h"
#include "int4.h"


class GameManager;

Bullet::Bullet()
{
	Bullet::OnBullet = false;

}

void Bullet::MoveBullet()
{
	int4 BulletAddPos = Up;
	AddPos(BulletAddPos);

	if (GetPos().Y < 0)
	{
		int4 BulletSetPos = { 0,0 };
		SetPos(BulletSetPos);

		OnBullet = false;

	}

	
}






