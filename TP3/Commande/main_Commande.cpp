#include "Commande.h"
#include <iostream>


int main()
{
	Produit tournevis("Tournevis", "Tournevis cruciforme de la marque FACOM", 3, 6.87);
	Produit marteau("Marteau", "Marteau classique", 5, 7.5);
	Produit perceuse("Perceuse", "Perceuse de la marque MAKITA pour petits travaux", 2, 50);

	std::vector<Produit> panier_Arthur;

	Client arthur("Pendragon","Arthur","09876",panier_Arthur);
	
	Commande commande_arthur(arthur);

	std::cout<<arthur; 

	std::cout<<commande_arthur;


	return 0;
}
