#include "auteur.h"
#include "../Date/date.h"
#include <iostream>

int main()
{
	Date date(5, 6, 1954);
	Auteur Murail(00,"Murail","Marie-Aude", date);
		std::cout<< Murail << std::endl;
}