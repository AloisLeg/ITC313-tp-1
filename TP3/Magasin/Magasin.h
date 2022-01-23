#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <iterator>
#include "../Produit/Produit.h"
#include "../Client/Client.h"
#include "../Commande/Commande.h"



#ifndef MAGASIN_H
#define MAGASIN_H


class Magasin {

	

public: 
	Magasin(std::vector<Produit> tableauproduits, std::vector<Client> clients, std::vector<Commande> commandes);
	std::vector<Produit> gettableauProduits() const;
	std::vector<Client> gettableauClients() const;
	std::vector<Commande> gettableauCommandes() const;
	std::vector<Commande> gettableauCommandesPassees()const;
	void afficher() const;
	void afficher_Produit(std::string nom_produit) const;
	void afficher_Client (std::string nom_client) const;
	void afficher_Commande (std::string identifiant) const;
	void afficher_Produit_Magasin() const;
	void afficher_Produit_Magasin_titre() const;
	void afficher_Client_Magasin() const;
	void afficher_Client_Magasin_titre() const;
	void afficher_Commande_Magasin() const;
	void afficher_Commandes__Passees_Magasin() const;


	std::vector<Produit> ajouternouveauproduit(Produit& produit);
	void nvellequantite(double quantite, std::string nom_produit); // A VERIFIER
	void ajouternouveauclient(std::string nom,std::string prenom, std::string identifiant, std::vector<Produit> panier);
	void ajout_Produit_Client(Produit& produit, std::string identifiant);
	void suppr_Produit_Client(Produit& produit, std::string identifiant);
	void modif_Produit_Client(double it, Produit& produit, std::string identifiant);
	void validercommande(std::string identifiant);
	void annulercommandevalidee(std::string identifiant, std::string nvstatut);
	

private: 


	std::vector<Produit> m_tableauproduits;
	std::vector<Client> m_clients;
	std::vector<Commande> m_commandes;
	std::vector<Commande> m_commandespassees;


};

#endif