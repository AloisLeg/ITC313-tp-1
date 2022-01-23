#include "Produit.h"
#include <iostream>

int main()
{
	
	Produit tournevis("Tournevis", "Tournevis cruciforme de la marque FACOM", 3, 6.87);
	Produit marteau("Marteau", "Marteau classique", 5, 7.5);
	Produit perceuse("Perceuse", "Perceuse de la marque MAKITA pour petits travaux", 2, 50);

	std::cout<<tournevis<<std::endl<<marteau<<std::endl<<perceuse<<std::endl;
	//tournevis.changerquantite(2);
	//marteau.changerquantite(-5);

	std::cout<<tournevis<<std::endl<<marteau<<std::endl<<perceuse<<std::endl;
	std::cout<<"Produit a comparer :"<<std::endl;
	std::string nomproduit;
	std::cin>>nomproduit;
	Produit Test(nomproduit,"nomproduitTest",1,1);

	if (Test==tournevis)
	{
		std::cout<<"C'est un tournevis"<<std::endl;
	}
	else std::cout<<"NAN";

	return 0;
}