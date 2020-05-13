#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Person.h"

class Vehicle
{
private:
	std::string name;
	std::string farbe;
	std::vector <Person> passengers;
	int pos;
	unsigned int horsepower;
	unsigned int sitze;

public:
	Vehicle(std::string name, int pos, unsigned int hp, unsigned int sitze, std::string farbe)
		:name(name), pos(pos), horsepower(hp), sitze(sitze), farbe(farbe)
	{
	}

	const std::string& const getName() const;
	const std::string& getFarbe() const;
	const int& getPos() const;
	const unsigned int& getHP() const;
	const unsigned int& getSitze() const;
	void enter(Person person);
	void exit(unsigned int seat_number);
	const void getVec() const;
};

