#include "Person.h"
#include <vector>
#include <iostream>

const std::string& Person::getNat() const { return nationalität; }
const std::string& Person::getName() const { return name; }

void Person::greet()
{
	if(this->nationalität == "de")
		std::cout << "Hallo " << this->name << std::endl;
	else if(this->nationalität == "en")
		std::cout << "Hello " << this->name << std::endl;
	else if(this->nationalität == "it")
		std::cout << "Ciao " << this->name << std::endl;
	else if(this->nationalität == "es")
		std::cout << "Hola " << this->name << std::endl;
	else
		std::cout << "Not Hello" << std::endl;
}

bool Person::operator==(const Person& rhs)
{
	if (this->name == rhs.name && this->nationalität == rhs.nationalität)
		return true;
	else
		return false;
}