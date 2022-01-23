#include "Client.h"



Client::Client(std::string nom, std::string prenom, std::string identifiant, std::vector<Produit> panier): m_nom(nom),m_prenom(prenom),m_identifiant(identifiant),m_panier(panier){

	}
		

std::string Client::getprenom() const{
	return m_prenom;
}
std::string Client::getnom() const{
	return m_nom;
}
std::string Client::getidentifiant()const{
	return m_identifiant;
}
std::vector<Produit> Client::getpanier()const{
	return m_panier;
} 

std::vector<int> Client::getquantitepanier() const{
	return m_quantitepanier;
}

void Client::afficherpanier() const {

	std::vector<Produit> list_panier=getpanier();
	std::vector<int> list_qtpanier=getquantitepanier();

	for (auto it = 0; it < list_panier.size() ; ++it)
	{
		std::cout<<" - "<<list_panier[it].gettitre()<<" - "<<list_qtpanier[it]<<std::endl;
	}
}

void Client::ajoutproduitpanier(Produit &produit){

	int A=1;
	
if (m_panier.size()!=0)
{
	
	for (int i = 0; i <= m_panier.size() && A==1; ++i)
	{		if (m_panier[i]==produit)
			{
			m_quantitepanier[i]+=A;
			A++;
			}
			else{
			m_panier.push_back(produit);
			m_quantitepanier.push_back(A);
			A++;}

		}
}

else {
	m_panier.push_back(produit);
	m_quantitepanier.push_back(A);
}
}

void Client::viderpanier(){
	m_panier.clear();
	m_quantitepanier.clear();

}


void Client::deleteproduit(Produit &produit){
	int A=0;
	for (int i = 0; i <= m_panier.size() && A==0; ++i)
	{
		if (m_panier[i]==produit)
		{
			m_panier.erase(m_panier.begin()+i);
			m_quantitepanier.erase(m_quantitepanier.begin()+i);
			A++;
		}
		else if (A==m_panier.size())
		{
			std::cout<<"Produit à supprimer non trouvé"<<std::endl;
		}
	}
}

void Client::modifquantitepanier(Produit &produit, double it){

	int A=1;
	for (int i = 0; i <= m_panier.size() && A==1; ++i)
	{		
		if (m_panier[i]==produit)
			{
			m_quantitepanier[i]+=it;
			A++;
			if (m_quantitepanier[i]<=0)
			{m_panier.erase(m_panier.begin()+i);
			m_quantitepanier.erase(m_quantitepanier.begin()+i);}
			
		}
}
}



std::ostream& operator<< (std::ostream& os, const Client& client){
    os << "Informations Client : "<<std::endl<< "Prénom :"<<client.getprenom()<<std::endl<< "Nom : "<<client.getnom()<<std::endl<< "identifiant : "<<client.getidentifiant()<<std::endl<< "Panier : "<<std::endl;
    client.afficherpanier();
    return os;
}