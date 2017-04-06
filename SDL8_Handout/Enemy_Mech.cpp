#include "Application.h"
#include "Enemy_Mech.h"
#include "ModuleCollision.h"

Enemy_Mech::Enemy_Mech(int x, int y) : Enemy(x, y)
{
	walk.PushBack({ 3, 107, 33, 30 });
	walk.PushBack({ 36, 107, 33, 30 });
	walk.PushBack({ 71, 104, 29, 33 });

	animation = &walk;

	collider = App->collision->AddCollider({ 0, 0, 24, 24 }, COLLIDER_TYPE::COLLIDER_ENEMY, (Module*)App->enemies);

	original_y = y;
}

void Enemy_Mech::Move()
{

}