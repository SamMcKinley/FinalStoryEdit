#pragma once
#include "Character.h"
class Intruder :
	public Character
{
public:
		void addCargo(std::string item);
		void removeCargo();
	
	private:
		std::vector<std::string> cargo;
};
