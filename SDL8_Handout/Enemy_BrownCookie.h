#ifndef __ENEMY_BROWNCOOKIE_H__
#define __ENEMY_BROWNCOOKIE_H__

#include "Enemy.h"
#include "Path.h"
#include "p2Point.h"

class Enemy_BrownCookie : public Enemy
{
private:
	float wave = -1.0f;
	int original_y = 0;
	int original_x = 0;
	Animation fly;
	Path pathing;
	iPoint original_pos;

public:

	Enemy_BrownCookie(int x, int y);

	void Move();
};

#endif // __ENEMY_BROWNCOOKIE_H__