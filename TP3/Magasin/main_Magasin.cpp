#include <iostream>
#include "Magasin.h"

void titre(){
	std::cout<<"Bienvenue dans la gestion de votre magasin EasyStore"<<std::endl;
	std::cout<<"Pour :"<<std::endl;
	std::cout<<" -Gérer le magasin entrez 1 "<<std::endl;
	std::cout<<" -Gérer les clients entrez 2 "<<std::endl;
	std::cout<<" -Gérer les commandes entrez 3 "<<std::endl;
	std::cout<<" -Sortir de l'application entrez 0 "<<std::endl;}

void gestionmagasin(Magasin magasin){
	
	int B=1;
	
	while(B!=0){
	std::cout<<"Gestion du Magasin"<<std::endl;
	std::cout<<"Pour :"<<std::endl;
	std::cout<<" -Afficher tout le magasin entrez 1 "<<std::endl;
	std::cout<<" -Afficher tous les produits entrez 2 "<<std::endl;
	std::cout<<" -Afficher un produit en particulier entrez 3 "<<std::endl;
	std::cout<<" -Ajouter un produit entrez 4 "<<std::endl;
	std::cout<<" -Modifier la quantité d'un produit entrez 5 "<<std::endl;
	std::cout<<" -Retourner en arrière entrez 0 "<<std::endl;
	std::cin>>B;
	switch (B){
		case 1:
		magasin.afficher();
		break;

		case 2:
		magasin.afficher_Produit_Magasin();
		break;

		case 3:{
		std::string titre;
		std::cout<<"Veuillez entrer le nom d'un produit parmi la liste suivante :"<<std::endl;
		magasin.afficher_Produit_Magasin_titre();
		std::cin>>titre;
		magasin.afficher_Produit(titre);
	}
		break;

		case 4:{
		std::string titre;
		std::string description;
		int quantitedispo=0;
		double prixunitaire=0;
		std::cout<<"Informations du produit :"<<std::endl;
		std::cout<<"Titre : ";
		std::cin>>titre;
		std::cout<<std::endl;
		std::cout<<"Description : ";
		std::cin>>description;
		std::cout<<std::endl;
		std::cout<<"Quantité Disponible : ";
		std::cin>>quantitedispo;
		std::cout<<std::endl;
		std::cout<<"Prix Unitaire: ";
		std::cin>>prixunitaire;
		std::cout<<std::endl;
		Produit produit(titre,description,quantitedispo,prixunitaire);
		magasin.ajouternouveauproduit(produit);
		std::cout<<"Le produit "<<produit.gettitre()<<" a bien été ajouté."<<std::endl;
		}
		break;

		case 5:{
		std::string titre;
		double quantite;
		std::cout<<"Liste des produits :"<<std::endl;
		magasin.afficher_Produit_Magasin_titre();
		std::cout<<"Entrez le nom du produit dont vous voulez modifier la quantité : ";
		std::cin>>titre;
		std::cout<<std::endl<<"Entrez le modificateur de quantité (avec - devant pour enlever): ";
		std::cin>>quantite;
		magasin.nvellequantite(quantite, titre);
		}
		break;
	}	

	}}
void gestionclient(Magasin magasin){
	int B=1;
	
	while(B!=0){
	std::cout<<"Gestion des clients"<<std::endl;
	std::cout<<"Pour :"<<std::endl;
	std::cout<<" -Afficher les clients entrez 1 "<<std::endl;
	std::cout<<" -Afficher un client en particulier entrez 2 "<<std::endl;
	std::cout<<" -Ajouter un client entrez 3 "<<std::endl;
	std::cout<<" -Ajouter un produit au panier entrez 4 "<<std::endl;
	std::cout<<" -Supprimer un produit du panier entrez 5 "<<std::endl;
	std::cout<<" -Modifier la quantité d'un produit du panier entrez 6 "<<std::endl;
	std::cout<<" -Retourner en arrière entrez 0 "<<std::endl;
	std::cin>>B;
	switch (B){
		case 1:
		{
			magasin.afficher_Client_Magasin();
		}
		break;

		case 2:
		{
		std::string identifiant;
		std::cout<<"Veuillez entrer l'identifiant d'un client parmi la liste suivante :"<<std::endl;
		magasin.afficher_Client_Magasin_titre();
		std::cin>>identifiant;
		magasin.afficher_Client(identifiant);
		}
		break;

		case 3:
		{
		std::string nom;
		std::string prenom;
		std::string identifiant;
		std::vector<Produit> panier;
		std::cout<<"Informations du Client :"<<std::endl;
		std::cout<<"Nom : ";
		std::cin>>nom;
		std::cout<<std::endl;
		std::cout<<"Prenom : ";
		std::cin>>prenom;
		std::cout<<std::endl;
		std::cout<<"Identifiant : ";
		std::cin>>identifiant;
		std::cout<<std::endl;
		magasin.ajouternouveauclient(nom, prenom, identifiant, panier);

		std::cout<<"Le client a bien été ajouté."<<std::endl;
		}
		
		break;

		case 4:
		{
			std::string identifiant;
			std::string titre;
			std::cout<<"Veuillez entrer l'identifiant d'un client parmi la liste suivante :"<<std::endl;
			magasin.afficher_Client_Magasin_titre();
			std::cin>>identifiant;
			std::cout<<"Liste des produits :"<<std::endl;
			magasin.afficher_Produit_Magasin_titre();
			std::cout<<"Entrez le nom du produit que vous souhaitez ajouter : ";
			std::cin>>titre;
			int C=0;
			std::vector<Produit> tableauproduits=magasin.gettableauProduits();
			for (int i = 0; i < tableauproduits.size(); ++i)
			{
				
				if (tableauproduits[i].gettitre()==titre && C==0)
				{
					Produit produit=tableauproduits[i];
					C++;
					magasin.ajout_Produit_Client(produit, identifiant);
				}

			}
			if (C==0)
			{
				std::cout<<"Le produit n'a pas été trouvé"<<std::endl;
			}
			
		}
		break;

		case 5:
		{
			std::string identifiant;
			std::string titre;
			std::cout<<"Veuillez entrer l'identifiant du client parmi la liste suivante :"<<std::endl;
			magasin.afficher_Client_Magasin_titre();
			std::cin>>identifiant;
			std::cout<<"Client :"<<std::endl;
			magasin.afficher_Client(identifiant);
			std::cout<<"Entrez le nom du produit que vous souhaitez supprimer : ";
			std::cin>>titre;
			int C=0;
			std::vector<Produit> tableauproduits=magasin.gettableauProduits();
			for (int i = 0; i < tableauproduits.size(); ++i)
			{
				
				if (tableauproduits[i].gettitre()==titre && C==0)
				{
					Produit produit=tableauproduits[i];
					C++;
					magasin.suppr_Produit_Client(produit, identifiant);
				}

		}
		if (C==0)
			{
				std::cout<<"Le produit n'a pas été trouvé"<<std::endl;
			}}

		break;

		case 6:
		{
			std::string identifiant;
			std::string titre;
			double quantite;
			std::cout<<"Veuillez entrer l'identifiant du client parmi la liste suivante :"<<std::endl;
			magasin.afficher_Client_Magasin_titre();
			std::cin>>identifiant;
			std::cout<<"Client :"<<std::endl;
			magasin.afficher_Client(identifiant);
			std::cout<<"Entrez le nom du produit que vous souhaitez modifier : ";
			std::cin>>titre;
			std::cout<<std::endl<<"Entrez le modificateur de quantité (avec - devant pour enlever): ";
			std::cin>>quantite;
			int C=0;
			std::vector<Produit> tableauproduits=magasin.gettableauProduits();
			for (int i = 0; i < tableauproduits.size(); ++i)
			{
				
				if (tableauproduits[i].gettitre()==titre && C==0)
				{
					Produit produit=tableauproduits[i];
					C++;
					magasin.modif_Produit_Client(quantite, produit, identifiant);
				}

		}
		if (C==0)
			{
				std::cout<<"Le produit n'a pas été trouvé"<<std::endl;
			}
		}
		break;

}
}
}


void gestioncommande(Magasin magasin){
	int B=1;

	while(B!=0){
	std::cout<<"Gestion des commandes"<<std::endl;
	std::cout<<"Pour :"<<std::endl;
	std::cout<<" -Afficher les commandes actuelles et passées entrez 1 "<<std::endl;
	std::cout<<" -Valider une commande entrez 2 "<<std::endl;
	std::cout<<" -Annuler une commande validée entrez 3 "<<std::endl;
	std::cout<<" -Retourner en arrière entrez 0 "<<std::endl;
	std::cin>>B;
	switch(B){
		case 1:
		{
		magasin.afficher_Commande_Magasin();
		magasin.afficher_Commandes__Passees_Magasin();
		}
		break;

		case 2:
		{
			std::string identifiant;
			magasin.afficher_Commande_Magasin();
			std::cout<<"Entrez l'identifiant du client dont vous voulez valider la commande : ";
			std::cin>>identifiant;
			magasin.validercommande(identifiant);
		}
		break;

		case 3:
		{
			std::string identifiant;
			magasin.afficher_Commandes__Passees_Magasin();
			std::cout<<"Entrez l'identifiant du client dont vous voulez valider la commande : ";
			std::cin>>identifiant;
			magasin.annulercommandevalidee(identifiant, "Annulée");
		}
		break;
	}
}
}

int main()
{
	std::vector<Produit> produits;
	std::vector<Client> clients;
	std::vector<Commande> commandes;

	std::vector<Produit> panier_Arthur;
	std::vector<Produit> panier_Lancelot;
	

	Produit tournevis("Tournevis", "Tournevis cruciforme de la marque FACOM", 32, 6.87);
	Produit perceuse("Perceuse", "Perceuse de la marque MAKITA pour petits travaux", 22, 50);
	Produit marteau("Marteau", "Marteau classique", 25, 7.5);
	Produit scie_circulaire("Scie Circulaire","Scie circulaire en lot avec une visière de protection et des disques diamant",26,75);
	Produit visseuse("Visseuse","Visseuse de la marque Bosch",16,45);
	Produit clous("Clous","20 clous standards, s'utilisent avec un marteau",20,4.98);
	Produit cheville_bois("Chevilles en bois","Chevilles moyennement solides, en boîte de 25",37,8.5);
	Produit cheville_plastique("Chevilles en plastique","Chevilles peu solides, en boîte de 20",45,6.7);
	Produit chalumeau("Chalumeau","Chalumeau petit modèle",17,116);
	Produit vis("Vis","Boîte de 30 vis modèle standard",34,3.5);

	Magasin EasyStore(produits, clients, commandes);

	//Initialisation du stock du magasin
	EasyStore.ajouternouveauproduit(marteau);
	EasyStore.ajouternouveauproduit(perceuse);
	EasyStore.ajouternouveauproduit(tournevis);
	EasyStore.ajouternouveauproduit(scie_circulaire);
	EasyStore.ajouternouveauproduit(visseuse);
	EasyStore.ajouternouveauproduit(clous);
	EasyStore.ajouternouveauproduit(cheville_bois);
	EasyStore.ajouternouveauproduit(cheville_plastique);
	EasyStore.ajouternouveauproduit(chalumeau);
	EasyStore.ajouternouveauproduit(vis);

	titre();
	int A;
	std::cin>>A;
	while(A!=0)
	switch(A) {
		case 1:
		gestionmagasin(EasyStore);
		titre();
		std::cin>>A;
		break;

		case 2:
		gestionclient(EasyStore);
		titre();
		std::cin>>A;
		break;

		case 3:
		gestioncommande(EasyStore);
		titre();
		std::cin>>A;
		break;

	}
	return 0;
}