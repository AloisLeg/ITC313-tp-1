#include <iostream>
#include <string>
#include "Emprunt.h"


int main()
{	Date Datee1(1,1,2021);
	Date date(12,11,2021);
	Date datenaissance(11,07,1966);
	Auteur KM(123456, "Kentaro", "Miura", datenaissance);
	Livre Berserk("Berserk", KM, "Français", "Aventure/Horreur", 2723448126, date);
	Lecteur Lecteur1(012345, "Philippe", "Bouchon");

	Emprunt Emprunt1(Datee1,Lecteur1,Berserk) 
	std::cout<<Emprunt1.Datee1<<"  "<<Emprunt1.Berserk;
	return 0;
}