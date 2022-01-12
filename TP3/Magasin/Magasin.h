#include <iostream>
#include <string>
#include <vector>

#ifndef MAGASIN_H
#define MAGASIN_H


class Magasin {

public: 
	Magasin(std::vector<char> produits, std::vector<char> clients, std::vector<char> commandes);
	std::vector<char> getProduits() const;
	std::vector<char> getClients() const;
	std::vector<char> getCommandes() const;
	void afficher() const;


private: 
	std::vector<char> m_produits;
	std::vector<char> m_clients;
	std::vector<char> m_commandes;


};

#endif