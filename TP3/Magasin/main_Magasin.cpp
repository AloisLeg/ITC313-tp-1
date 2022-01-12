#include <iostream>
#include "Magasin.h"

int main(int argc, char const *argv[])
{
	std::vector<char> produits(3);
	std::vector<char> clients(3);
	std::vector<char> commandes(3);


	produits.clear();
	for(int i = 0 ; i <3 ; ++i)
	produits.push_back(i*1);
	
	clients.clear();
	for(int i = 0 ; i <3 ; ++i)
	clients.push_back(i*3);
	
	commandes.clear();
	for(int i = 0 ; i <3 ; ++i)
	commandes.push_back(i*5);


	Magasin EasyStore(produits, clients, commandes);
	EasyStore.afficher();

	return 0;
}