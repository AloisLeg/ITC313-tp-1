#include "auteur.h"
#include "../Date/date.h"
#include <iostream>

int main()
{
	Date date(5, 6, 1954);
	Auteur Murail(00,"Murail","Marie-Aude", date);
		std::cout<<"Nom :  "<<Murail.prenom()<<"  "<<Murail.nom()<<std::endl;
		std::cout<<"Date naissance :"<<Murail.datenaissance()<<std::endl;
}