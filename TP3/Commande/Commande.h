#include "../Client/Client.h"
#include "../Produit/Produit.h"
#include <iostream>
#include <vector>
#include <string>

#ifndef COMMANDE
#define COMMANDE


class Commande
{	
	friend class Magasin;

	public:
		Commande(Client m_client);
		Client getclient() const;
		std::string getstatut() const;
		std::vector<Produit> getachats() const;
		void afficherachats() const;


	private:
		std::string m_statut;
		Client m_client;
		std::vector<Produit> m_achats;
	
};


#endif

std::ostream& operator<< (std::ostream& os, const Commande& commande);