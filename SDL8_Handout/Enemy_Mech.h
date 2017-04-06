#ifndef __ENEMY_MECH_H__
#define __ENEMY_MECH_H__

#include "Enemy.h"

class Enemy_Mech : public Enemy
{
private:
	float wave = -1.0f;
	bool going_left = true;
	int original_y = 0;
	Animation walk;

public:

	Enemy_Mech(int x, int y);

	void Move();
};

#endif