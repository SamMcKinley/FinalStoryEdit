#include "Intruder.h"

//How the intruder's ability to steal works
void Intruder::addCargo(std::string item)
{
	cargo.push_back(item);
}
void Intruder::removeCargo()
{
	cargo.pop_back();
}