#include "Produit.h"
#include <iostream>

int main()
{
	
	Produit tournevis("Tournevis", "Tournevis cruciforme de la marque FACOM", 3, 6.87);
	Produit marteau("Marteau", "Marteau pour les Bouffons", 5, 7.5);
	Produit perceuse("Perceuse", "Perceuse de la marque MAKITA pour petits travaux", 2, 50);

	std::cout<<tournevis<<std::endl<<marteau<<std::endl<<perceuse<<std::endl;

	return 0;
}