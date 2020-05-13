#include "Person.h"
#include <vector>
#include <iostream>

const std::string& Person::getNat() const { return nationalit�t; }
const std::string& Person::getName() const { return name; }

void Person::greet()
{
	if(this->nationalit�t == "de")
		std::cout << "Hallo " << this->name << std::endl;
	else if(this->nationalit�t == "en")
		std::cout << "Hello " << this->name << std::endl;
	else if(this->nationalit�t == "it")
		std::cout << "Ciao " << this->name << std::endl;
	else if(this->nationalit�t == "es")
		std::cout << "Hola " << this->name << std::endl;
	else
		std::cout << "Not Hello" << std::endl;
}

bool Person::operator==(const Person& rhs)
{
	if (this->name == rhs.name && this->nationalit�t == rhs.nationalit�t)
		return true;
	else
		return false;
}