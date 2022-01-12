#include "Magasin.h"



Magasin::Magasin(std::vector<char> produits, std::vector<char> clients, std::vector<char> commandes): m_produits(produits), m_clients(clients), m_commandes(commandes) {}

std::vector<char> Magasin::getProduits() const {
	return m_produits;
}

std::vector<char> Magasin::getClients() const {
	return m_clients;
}

std::vector<char> Magasin::getCommandes() const {
	return m_commandes;
}

void Magasin::afficher()const {

	std::cout<<"Etat du Magasin : "<<std::endl<<"Produits :"<<std::endl;
	for (auto it = getCommandes().begin(); it != getCommandes().end(); ++it)
	{
		std::cout<<*it<<" - ";
	}

	std::cout<<std::endl<<"Clients :"<<std::endl;
	for (auto it = getClients().begin(); it != getClients().end(); ++it)
	{
		std::cout<<*it<<" - ";
	}

	std::cout<<std::endl<<"Commandes :"<<std::endl;
	for (auto it = getCommandes().begin(); it != getCommandes().end(); ++it)
	{
		std::cout<<*it<<" - ";
	}
}