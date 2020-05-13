#pragma once
#include <string>

class Person
{
private:
	std::string name;
	std::string nationalit�t;

public:
	Person(std::string name, std::string nat)
		:name(name), nationalit�t(nat)
	{}

	const std::string& getNat() const;
	const std::string& getName() const;
	bool operator==(const Person& rhs);
	void greet();
};

