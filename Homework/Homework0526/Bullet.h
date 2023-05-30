#pragma once
#include "Unit.h"


class Bullet : public Unit
{
public:

    Bullet();

    void MoveBullet();

    bool OnBullet;



protected:

private:

    int4 BulletPos;
};
