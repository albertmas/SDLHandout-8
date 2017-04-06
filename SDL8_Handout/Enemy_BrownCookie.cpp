#include "Application.h"
#include "Enemy_BrownCookie.h"
#include "ModuleCollision.h"
#include "Globals.h"

Enemy_BrownCookie::Enemy_BrownCookie(int x, int y):Enemy(x, y)
{	
	fly.PushBack({ 4, 71, 22, 23 });
	//fly.PushBack({ 36, 71, 25, 23 });
	//fly.PushBack({ 234, 38, 25, 23 });
	fly.speed = 0.2f;
	animation = &fly;

	pathing.PushBack({-1.0f,-0.75f}, 100);
	pathing.PushBack({ -1.0f, 0.75f }, 80);
	pathing.PushBack({ -1.0f, -1.25f }, 80);

	collider = App->collision->AddCollider({ 0, 0, 24, 24 }, COLLIDER_TYPE::COLLIDER_ENEMY, (Module*)App->enemies);

	original_pos.x = x;
	original_pos.y = y;
}


void Enemy_BrownCookie::Move()
{
	position = original_pos + pathing.GetCurrentPosition();
}
