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

	std::list<Auteur> listAuteurs;
	std::list<Livre> listLivres;
	std::list<Emprunt> listEmprunts;

	Biblio mainBiblio(listAuteurs, listLivres, listEmprunts);

	mainBiblio.addToLivresEmpruntes(Emprunt1);
	mainBiblio.addToLivresEmpruntes(Emprunt2);
	mainBiblio.addToListAuteurs(Jackie);
	mainBiblio.addToListAuteurs(Jackie2);
	mainBiblio.addToListLivres(TaraDuncan);
	mainBiblio.addToListLivres(TaraDuncan2);


	//std::cout << mainBiblio.livresEmpruntes()[0]) << std::endl;
	/*for (it= mainBiblio.livresEmpruntes().begin(); it!=mainBiblio.livresEmpruntes().end(); it++){
      std::cout << "-" <<*it << std::endl;
    }*/

    /*for (auto& i : mainBiblio.livresEmpruntes()) {
    std::cout << i;
	}*/

	auto p = mainBiblio.livresEmpruntes().begin();
  while(p != mainBiblio.livresEmpruntes().end()) {
    std::cout << *p << " ";
    p++;
  }


//	std::cout << mainBiblio << std::endl;


	return 0;
}