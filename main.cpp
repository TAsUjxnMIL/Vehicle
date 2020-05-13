#include <iostream>
#include "Vehicle.h"
#include "Person.h"


int main()
{
	Person p1{ "Peter", "de" };
	Person p2{ "Salman", "ar" };
	Person p3{ "Longer", "es" };
	Person p4{ "Zet", "it" };
	//Begrüßung der Erstellten Personen auf ihrer Sprache
	p1.greet();
	p2.greet();
	p3.greet();
	p4.greet();
	Vehicle audi ("Audi", 5, 300, 2, "schwarz");
	Vehicle bmw ("BWM", 5, 450, 3, "gruen");
	//Einsteigen
	audi.enter(p1);
	audi.enter(p2);
	audi.enter(p3); //Zu wenige Sitze -Error
	audi.getVec();
	//Aussteigen einer Person und einsteigen von p3
	audi.exit(2);
	audi.enter(p3); //Sollte jetzt funktionieren
	audi.getVec();
	//Einsteigen der selben Person
	bmw.enter(p2);
	bmw.enter(p3);
	bmw.enter(p2); //Gleiche Person in einem Auto geht nicht -Error
	bmw.getVec();
	//Aussteigen
	bmw.exit(1);
	bmw.exit(1);
	bmw.exit(1); //Keine Person im Auto -Error
	bmw.getVec();

	return 0;
}