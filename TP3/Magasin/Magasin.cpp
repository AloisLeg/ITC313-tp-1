#include "Magasin.h"



Magasin::Magasin(std::vector<Produit> tableauproduits, std::vector<Client> clients, std::vector<Commande> commandes): m_tableauproduits(tableauproduits), m_clients(clients), m_commandes(commandes) {}

std::vector<Produit> Magasin::gettableauProduits() const {
	return m_tableauproduits;
}

std::vector<Client> Magasin::gettableauClients() const {
	return m_clients;
}

std::vector<Commande> Magasin::gettableauCommandes() const {
	return m_commandes;
}

std::vector<Commande> Magasin::gettableauCommandesPassees()const{
	return m_commandespassees;
}


void Magasin::afficher() const {

	std::cout<<"Etat du Magasin : "<<std::endl;
	afficher_Produit_Magasin();
	afficher_Client_Magasin();
	afficher_Commande_Magasin();
}

std::vector<Produit> Magasin::ajouternouveauproduit(Produit &m_produit) {
	m_tableauproduits.push_back(m_produit);
	return m_tableauproduits;
}

void Magasin::afficher_Produit(std::string nom_produit) const{

	std::vector<Produit> liste_prod=gettableauProduits();
	std::cout<<"Recherche effectuée :"<<std::endl;
	int A=1;
	for (auto i = 0; i < liste_prod.size(); ++i)
	{	
		if (liste_prod[i].gettitre() == nom_produit)
		{
			std::cout<<liste_prod[i]<<std::endl;
			A++;
		}		
	}
	if (A==1)
	{
		std::cout<<"Pas de résultat."<<std::endl;
	}
}


void Magasin::afficher_Client (std::string test) const{
	std::vector<Client> liste_clients=gettableauClients();
	int A=1;
	std::cout<<"Recherche de : "<<test<<std::endl;
	for (auto i = 0; i < liste_clients.size(); ++i)
	{	
		if (liste_clients[i].getidentifiant() == test)
		{
			std::cout<<liste_clients[i]<<std::endl;
			A++;
		}		
		if (A==1)
		{
			std::cout<<"La Recherche n'a rien donné"<<std::endl;
		}
	}
}


void Magasin::afficher_Commande (std::string identifiant) const {
	std::vector<Commande> commandespassees=gettableauCommandesPassees();
	std::vector<Commande> commandes=gettableauCommandes();

	std::cout<<"Recherche de : "<<identifiant<<std::endl;
	int A=1;
	std::cout<<"Liste des commandes passées : "<<std::endl;
	for (int i = 0; i < commandespassees.size(); ++i)
	{
		
		if (commandespassees[i].getclient().getidentifiant()==identifiant)
		{
			std::cout<<commandespassees[i];
			A++;
		}
		
	}
	if (A==1)
		{
			std::cout<<"Pas d'ancienne commande"<<std::endl;
		}
	std::cout<<"Commande actuelle :"<<std::endl;
	for (int i = 0; i < commandes.size() ; ++i)
	{
		if (commandes[i].getclient().getidentifiant()==identifiant)
		{
			std::cout<<commandes[i];
		}
	}
}



void Magasin::afficher_Produit_Magasin() const{
	std::vector<Produit> liste_prod=gettableauProduits();

	std::cout<<"Produits :"<<std::endl;
	for (auto it = liste_prod.begin(); it != liste_prod.end(); ++it)
	{
		std::cout<<" - "<<*it<<std::endl;
	}
}

void Magasin::afficher_Produit_Magasin_titre() const{
	std::vector<Produit> liste_prod=gettableauProduits();

	std::cout<<"Produits :"<<std::endl;
	for (int i = 0; i < liste_prod.size(); ++i)
	{
		std::cout<<" - "<<liste_prod[i].gettitre();
	}
	std::cout<<std::endl;
}



void Magasin::afficher_Client_Magasin() const{
	std::vector<Client> liste_clients=gettableauClients();

	std::cout<<std::endl<<"Clients :"<<std::endl;
	for (int i = 0; i < liste_clients.size(); ++i)
	{
		std::cout<<" - "<<liste_clients[i]<<std::endl;
	}

}


void Magasin::afficher_Client_Magasin_titre() const{
	std::vector<Client> liste_clients=gettableauClients();

	std::cout<<"Clients :"<<std::endl;
	for (int i = 0; i < liste_clients.size(); ++i)
	{
		std::cout<<" - "<<liste_clients[i].getprenom()<<" - "<<liste_clients[i].getnom()<<" - "<<liste_clients[i].getidentifiant()<<std::endl;
	}
	std::cout<<std::endl;
}


void Magasin::afficher_Commande_Magasin() const{
	std::vector<Commande> liste_commandes=gettableauCommandes();

	std::cout<<std::endl<<"Commandes :"<<std::endl;
	for (int i = 0; i < liste_commandes.size(); ++i)
	{
		std::cout<<" - "<<liste_commandes[i]<<std::endl;
	}

}


void Magasin::afficher_Commandes__Passees_Magasin() const{
	std::vector<Commande> liste_commandesp=gettableauCommandesPassees();

	std::cout<<std::endl<<"Commandes Passees:"<<std::endl;
	for (int i = 0; i < liste_commandesp.size(); ++i)
	{
		std::cout<<" - "<<liste_commandesp[i]<<std::endl;
	}

}
	

void Magasin::nvellequantite(double quantite, std::string nom_produit) {

	std::vector<Produit> liste_prod=gettableauProduits();
	
	int A=0;
	for (auto i = 0; i < liste_prod.size(); ++i)
	{	
		if (liste_prod[i].gettitre() == nom_produit && A==0)
		{
			std::cout<<"Changement effectué :"<<std::endl;
			std::cout<<liste_prod[i].gettitre()<<std::endl;
			std::cout<<"Ancienne Quantité Disponible : "<<m_tableauproduits[i].getquantitedispo()<<std::endl;
			m_tableauproduits[i].changerquantite(quantite);
			std::cout<<"Nouvelle Quantité Disponible : "<<m_tableauproduits[i].getquantitedispo()<<std::endl;
			A++;
		}		
	}
	if (A==0)
	{
		std::cout<<"Produit non trouvé"<<std::endl;
	}
}

void Magasin::ajouternouveauclient(std::string nom,std::string prenom, std::string identifiant, std::vector<Produit> panier){
	Client client(nom,prenom,identifiant,panier);
	m_clients.push_back(client);
	Commande commande(client);
	m_commandes.push_back(commande);
}

void Magasin::ajout_Produit_Client(Produit& produit, std::string identifiant){
	int A=0;
	for (int i = 0; i < m_clients.size(); ++i && A==0)
	{
		if (m_clients[i].getidentifiant()==identifiant)
		{
			m_clients[i].ajoutproduitpanier(produit);
			std::cout<<"Le produit "<<produit.gettitre()<<" a été ajouté au client "<<m_clients[i].getnom()<<" "<<m_clients[i].getprenom()<<std::endl;
			Commande commande(m_clients[i]);
			m_commandes[i]=commande;
			m_commandes[i].m_statut="En attente de validation par le client ";
			A++;
		}
	}
		if (A==0)
		{
			std::cout<<"Le client n'a pas été trouvé";
		}
}

void Magasin::suppr_Produit_Client(Produit& produit, std::string identifiant){
	int A=0;
	for (int i = 0; i < m_clients.size(); ++i && A==0)
	{
		if (m_clients[i].getidentifiant()==identifiant)
		{
			m_clients[i].deleteproduit(produit);
			std::cout<<"Le produit "<<produit.gettitre()<<" a été enlevé au panier du client "<<m_clients[i].getnom()<<" "<<m_clients[i].getprenom()<<std::endl;
			Commande commande(m_clients[i]);
			m_commandes[i]=commande;
			if (m_commandes[i].m_achats.size()==0)
			{
				m_commandes[i].m_statut="Pas de produits dans le panier";
			}
			A++;
		}
	}
		if (A==0)
		{
			std::cout<<"Le client n'a pas été trouvé";
		}
	
}

void Magasin::modif_Produit_Client(double it, Produit& produit, std::string identifiant){
	int A=0;
	for (int i = 0; i < m_clients.size(); ++i && A==0)
	{
		if (m_clients[i].getidentifiant()==identifiant)
		{
			m_clients[i].modifquantitepanier(produit, it);
			Commande commande(m_clients[i]);
			m_commandes[i]=commande;
			if (m_commandes[i].m_achats.size()==0)
			{
				m_commandes[i].m_statut="Pas de produits dans le panier";
			}
			A++;
		}
	}
		if (A==0)
		{
			std::cout<<"Le client n'a pas été trouvé";
		}
	
}

void Magasin::validercommande(std::string identifiant){
		int A=0;
		int B=0;
	for (int i = 0; i < m_clients.size(); ++i && A==0)
	{
		if (m_clients[i].getidentifiant()==identifiant)
		{
			
			m_commandes[i].m_statut="Validée"; 
			std::vector<Produit> produitscommande=m_commandes[i].getachats();
			Commande commandeinitiale=m_commandes[i];
			for (int i = commandeinitiale.m_achats.size(); i > 0; --i)
			{
				commandeinitiale.m_achats.pop_back();
			}
			int C=0;
			int D=0;

			while (C<produitscommande.size())
			{
				while (D<m_tableauproduits.size() && B==0)
				{
					//std::cout<<produitscommande[C].gettitre()<<" - "<<m_tableauproduits[D].gettitre()<<std::endl; //Test pour savoir quels éléments sont comparés
					if (m_tableauproduits[D]==produitscommande[C])
					{	
						std::vector<int> quantitepanier=m_clients[i].getquantitepanier();

						if (quantitepanier[C]>m_tableauproduits[D].getquantitedispo())
						{
							std::cout<<"Pas assez de disponibilité du produit "<<produitscommande[C].gettitre()<<" Le produit a été retiré de la commande"<<std::endl;
							suppr_Produit_Client(m_clients[i].m_panier[C], identifiant);
						}
						
						else {
						commandeinitiale.m_achats.push_back(produitscommande[C]);

						std::vector<int> enlever=m_clients[i].getquantitepanier();
						commandeinitiale.m_achats[commandeinitiale.m_achats.size()-1].m_quantitedispo=enlever[C];
						//std::cout<<"On enlève : "<<enlever[C]<<" à "<<m_tableauproduits[D].m_quantitedispo<<std::endl; Test
						m_tableauproduits[D].m_quantitedispo-=enlever[C];
						suppr_Produit_Client(m_clients[i].m_panier[C], identifiant);}

						B++;
					}
					D++;
					if (B==0 && D==m_tableauproduits.size()) //A VOIR SI PRODUIT DANS LE PANIER EST DANS LE MAGASIN 
					{
						std::cout<<"Le produit "<<produitscommande[C].gettitre()<<" n'est pas en magasin."<<std::endl;
						//suppr_Produit_Client(m_clients[i].m_panier[C], identifiant);
						}

					
				}

				

				D=0; // On parcourt le tableau produit du magasin pour chaque produit panier
				B=0; // !=0 si produit trouvé
				C++;
			}

			m_commandespassees.push_back(commandeinitiale);
			
			std::cout<<"La commande du client "<<m_clients[i].getprenom()<<" "<<m_clients[i].getnom()<<" a été validée"<<std::endl;
			A++;
		}
	}
		if (A==0)
		{
			std::cout<<"Le client n'a pas été trouvé"<<std::endl;
		}
	
}


void Magasin::annulercommandevalidee(std::string identifiant, std::string nvstatut){
	int A=0;
	std::cout<<"Différentes commandes du client : "<<std::endl;
	for (int i = 0; i < m_commandespassees.size() ; ++i)
	{
		
		if (m_commandespassees[i].getclient().getidentifiant()==identifiant)
		{	std::cout<<"Commande numéro : "<<i<<std::endl<<m_commandespassees[i];
			
			A++;
		}
		else if (A==0)
		{
			std::cout<<"Le client n'a pas été trouvé"<<std::endl;
		}
	}
	if (nvstatut=="Annulée")
			{
				int num;
				std::cout<<"Vous souhaitez modifier la Commande n° : ";
				std::cin>>num;
				if (num<=m_commandespassees.size())
				{
					for (int a = 0; a < m_commandespassees[num].m_achats.size(); ++a)
					{	int B=0;
						for(int b=0; b < m_tableauproduits.size(); ++b && B==0)
							if (m_tableauproduits[b]==m_commandespassees[num].m_achats[a])
							{
								m_tableauproduits[b].m_quantitedispo+=m_commandespassees[num].m_achats[a].getquantitedispo();
								B++;
							}
						//std::cout<<" Ancien Panier :"<<m_commandespassees[num].m_achats[a]<<std::endl; 
						//std::cout<<"Quantité :"<<m_commandespassees[num].m_achats[a].getquantitedispo()<<std::endl;

					}
					m_commandespassees.erase(m_commandespassees.begin()+num);
					std::cout<<"La commande a été annulée, il n'y a plus d'articles dans le panier."<<std::endl;
				}
				else std::cout<<"Le numéro de commande est invalide."<<std::endl;
				
			}


}