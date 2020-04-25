#include "Intruder.h"
void Intruder::addCargo(std::string item)
{
	cargo.push_back(item);
}
void Intruder::removeCargo()
{
	cargo.pop_back();
}