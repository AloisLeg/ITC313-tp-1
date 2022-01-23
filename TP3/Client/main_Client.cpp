
#include <iostream>
#include "Client.h"

int main()
{
	
	Produit tournevis("Tournevis", "Tournevis cruciforme de la marque FACOM", 3, 6.87);
	Produit marteau("Marteau", "Marteau classique", 5, 7.5);
	Produit perceuse("Perceuse", "Perceuse de la marque MAKITA pour petits travaux", 2, 50);

	std::vector<Produit> panier_Arthur;


	Client arthur("Pendragon","Arthur","09876",panier_Arthur);
	Client lancelot("DuLac","Lancelot","12345",panier_Lancelot);
	//std::cout<<arthur;
	arthur.ajoutproduitpanier(perceuse);
	//arthur.ajoutproduitpanier(tournevis);
	std::cout<<arthur;
	arthur.ajoutproduitpanier(perceuse);
	arthur.ajoutproduitpanier(marteau);
	
	std::cout<<arthur;
	arthur.modifquantitepanier(perceuse, -3);
	arthur.deleteproduit(marteau);
	std::cout<<arthur<<"Taille m_panier"<<arthur.getpanier().size();
	//<<"Taille m_qtepanier"<<arthur.getquantitepanier().size()<<std::endl;
	return 0;
}