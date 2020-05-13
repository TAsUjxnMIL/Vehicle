#include "Vehicle.h"

const std::string& Vehicle::getName() const { return name; }
const int& Vehicle::getPos() const { return pos; }
const unsigned int& Vehicle::getHP() const { return horsepower; }
const unsigned int& Vehicle::getSitze() const { return sitze; }
const std::string& Vehicle::getFarbe() const { return farbe; }

const void Vehicle::getVec() const
{
	std::cout << "====================================" << std::endl;
	std::cout << "Personen im Auto: " << std::endl;
	if (passengers.size() == 0)
		std::cout << "Keiner im Auto" << std::endl;
	else
		for (auto elem : passengers)
			std::cout << "Name: " << elem.getName() << " Nationalitaet: " << elem.getNat() << std::endl;
	std::cout << "====================================\n" << std::endl;
}

void Vehicle::enter(Person person)
{
	if (passengers.size() == sitze)
		return;
	else
	{
		for (auto elem : passengers)
		{
			if (elem == person) //Operator muss Überladen werden aufgrund von eigener klasse
				return;
		}

		for (auto elem : passengers)
		{
			std::cout << person.getName() << " Begruesst " << elem.getName() << std::endl;
			std::cout << elem.getName() << " gruesst " << person.getName() << " zurueck" << std::endl;
		}
		passengers.push_back(person);
	}
}

void Vehicle::exit(unsigned int seat_number)
{
	if (seat_number <= passengers.size())
		passengers.erase(passengers.begin() + (seat_number-1));
	else
		std::cout << "Nobody is in that seat" << std::endl;
}