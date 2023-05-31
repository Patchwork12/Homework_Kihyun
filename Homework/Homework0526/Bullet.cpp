#include "Bullet.h"
#include "GameManager.h"


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






