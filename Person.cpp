#include "Person.h"
#include <vector>
#include <iostream>

const std::string& Person::getNat() const { return nationalitšt; }
const std::string& Person::getName() const { return name; }

void Person::greet()
{
	if(this->nationalitšt == "de")
		std::cout << "Hallo " << this->name << std::endl;
	else if(this->nationalitšt == "en")
		std::cout << "Hello " << this->name << std::endl;
	else if(this->nationalitšt == "it")
		std::cout << "Ciao " << this->name << std::endl;
	else if(this->nationalitšt == "es")
		std::cout << "Hola " << this->name << std::endl;
	else
		std::cout << "Not Hello" << std::endl;
}

bool Person::operator==(const Person& rhs)
{
	if (this->name == rhs.name && this->nationalitšt == rhs.nationalitšt)
		return true;
	else
		return false;
}