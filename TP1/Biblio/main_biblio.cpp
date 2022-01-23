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
	Date Datee2(3,2,2019);
	Date date2(9,6,1996);
	Date date3(4, 30, 1959);
	Date datenaissance2(8,9,1995);

	Auteur Jackie2(9876543, "Jackie2", "Balboa2", datenaissance2);
	Auteur DeusEx(65343112, "Deus", "Ex", datenaissance);
	Auteur Jackie(13456654, "Jackie", "Balboa", datenaissance);
	Livre Livre1("Tara Duncan2", Jackie2, "Anglais2", "Fantaisie2", 9876543456, date2);
	Livre Essai("Ragnarok", DeusEx, "Japonais", "Action", 5677654323, date3);
	Livre Livre3("Les possibles", Jackie2, "Français", "philosphie", 839587832, date);
	Livre Livre4("Trois", Jackie, "Français", "Aventure", 26937830, date2);
	Livre Livre5("La datcha", DeusEx, "Russe", "Histoire", 67942468, date3);
	Livre Livre6("L'anomalie", Jackie2, "Français", "Fantastique", 8573625253, date2);
	Livre Livre7("Matin Brun", Jackie, "Anglais", "philosophie", 633689754685, date);
	Livre Livre8("Le cerf-volant", Jackie2, "Anglais", "Aventure", 567889763542, date2);
	Livre Livre9("Tara Duncan", Jackie, "Anglais", "Fantaisie", 2368654232, date);
	Lecteur Lecteur2(376458, "Mélanie2", "Garcia2");
	Lecteur Lecteur1(876543, "Mélanie", "Garcia");
	Emprunt Emprunt1(Datee1, Lecteur1, Livre1);
	Emprunt Emprunt3(Datee2, Lecteur1, Essai);
	Emprunt Emprunt2(Datee2, Lecteur2, Livre3);



	

	

	

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
	mainBiblio.addToListAuteurs(DeusEx);
	mainBiblio.addToListLivres(Livre1);
	mainBiblio.addToListLivres(Livre3);
	mainBiblio.addToListLivres(Livre4);
	mainBiblio.addToListLivres(Livre5);
	mainBiblio.addToListLivres(Livre6);
	mainBiblio.addToListLivres(Livre7);
	mainBiblio.addToListLivres(Livre8);
	mainBiblio.addToListLivres(Livre9);	
	mainBiblio.addToListLivres(Essai);


	//std::cout << Lecteur1.liste() << std::endl;
	//mainBiblio.livresEmpruntesPourcentage();
	//std::cout << Lecteur1.liste() << std::endl;
	std::cout << mainBiblio << std::endl;


	return 0;
}