#pragma once
#include <string>
#include <vector>

//Character class along with ammo for taser
class Character
{
public:
	Character();
	void setAmmo(int _ammo);
	int getAmmo();
private:
	int ammo;

};



