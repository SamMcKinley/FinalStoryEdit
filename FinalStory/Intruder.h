#pragma once
#include "Character.h"

//Intruder class along with ability to steal
class Intruder :
	public Character
{
public:
		void addCargo(std::string item);
		void removeCargo();
	
	private:
		std::vector<std::string> cargo;
};
