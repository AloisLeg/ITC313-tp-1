#include <iostream>
#include <string>
#include <vector>
#include "../Produit/Produit.h"

#ifndef CLIENT_H
#define CLIENT_H 


class Client {
	

	public:
		friend class Magasin; 
		friend class Commande;
		Client(std::string nom, std::string prenom, std::string identifiant, std::vector<Produit> panier);
		std::string getprenom() const;
		std::string getnom() const;
		std::string getidentifiant() const;
		std::vector<Produit> getpanier() const; 
		std::vector<int> getquantitepanier() const;
		void afficherpanier() const;



	private:
		void ajoutproduitpanier(Produit &produit);
		void viderpanier();
		void modifquantitepanier(Produit &produit, double it);
		void deleteproduit(Produit &produit);
		std::string m_nom;
		std::string m_prenom;
		std::string m_identifiant;
		std::vector<Produit> m_panier;
		std::vector<int> m_quantitepanier;


};

std::ostream& operator<< (std::ostream& os, const Client& client);

#endif