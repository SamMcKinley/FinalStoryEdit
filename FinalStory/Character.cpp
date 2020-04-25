#include "Character.h"
#include <string>
#include <vector>

Character::Character() : ammo(10) {}
void Character::setAmmo(int _ammo)
{
	ammo = _ammo;
}
int Character::getAmmo()
{
	return ammo;
}

