#include "Livre.h"
#include "../Date/date.h"
#include "../Auteur/auteur.h"
#include <iostream>

int main () {
	Date date(12,11,2021);
	Date datenaissance(11,07,1966);
	Auteur KM(123456, "Kentaro", "Miura", datenaissance);
	Livre Berserk("Berserk", KM, "Français", "Aventure/Horreur", 2723448126, date);
	std::cout << Berserk;

	Livre Essai("Essai", KM, "Deutsch", "Ennui", 465854326, date);
}
