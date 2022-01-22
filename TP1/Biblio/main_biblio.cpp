#include <string.h> 
#include <list>
#include <iostream>
#include "../Auteur/auteur.h"
#include "../Livre/Livre.h"
#include "../Emprunt/Emprunt.h"
#include "../Date/date.h"
#include "../Lecteur/lecteur.h"
#include "biblio.h"
#include "algorithm"


int main()
{


	Date Datee1(1,1,2021);
	Date date(10,12,2003);
	Date datenaissance(4,02,1987);

	Auteur Jackie(13456654, "Jackie", "Balboa", datenaissance);
	Livre TaraDuncan("Tara Duncan", Jackie, "Anglais", "Fantaisie", 2368654232, date);
	Lecteur Lecteur1(876543, "Mélanie", "Garcia");
	Emprunt Emprunt1(Datee1, Lecteur1, TaraDuncan);

	Date Datee2(3,2,2019);
	Date date2(9,6,1996);
	Date datenaissance2(8,9,1995);

	Auteur Jackie2(9876543, "Jackie2", "Balboa2", datenaissance2);
	Livre TaraDuncan2("Tara Duncan2", Jackie2, "Anglais2", "Fantaisie2", 9876543456, date2);
	Lecteur Lecteur2(376458, "Mélanie2", "Garcia2");
	Emprunt Emprunt2(Datee2, Lecteur2, TaraDuncan2);



	Auteur DeusEx(65343112, "Deus", "Ex", datenaissance);
	Date date3(4, 30, 1959);
	Livre Essai("Ragnarok", DeusEx, "Japonais", "Action", 5677654323, date3);

	Emprunt Emprunt3(Datee2, Lecteur1, Essai);

	std::list<Auteur> listAuteurs;
	std::list<Livre> listLivres;
	std::list<Emprunt> listEmprunts;
	std::list<Lecteur> listLecteurs;

	Biblio mainBiblio(listAuteurs, listLivres, listLecteurs, listEmprunts);

	mainBiblio.addToLivresEmpruntes(Emprunt1);
	mainBiblio.addToLivresEmpruntes(Emprunt2);
	mainBiblio.addToLivresEmpruntes(Emprunt3);
	mainBiblio.addToListLecteurs(Lecteur1);
	mainBiblio.addToListLecteurs(Lecteur2);
	mainBiblio.addToListAuteurs(Jackie);
	mainBiblio.addToListAuteurs(Jackie2);
	mainBiblio.addToListLivres(TaraDuncan);
	mainBiblio.addToListLivres(TaraDuncan2);
	mainBiblio.addToListLivres(Essai);


	std::cout << "La liste du lecteur : " <<Lecteur1.liste() << std::endl;
	mainBiblio.livresEmpruntesPourcentage();
	std::cout << "La liste du lecteur : " <<Lecteur1.liste() << std::endl;
	//std::cout << mainBiblio << std::endl;


	return 0;
}