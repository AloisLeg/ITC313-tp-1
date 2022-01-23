#include "Commande.h"

Commande::Commande(Client client): m_client(client){
	m_statut="Pas de produits dans le panier";
	m_achats=client.getpanier();
}


Client Commande::getclient() const{
	return m_client;
}



std::string Commande::getstatut() const{
	return m_statut;
}



std::vector<Produit> Commande::getachats() const{
	return m_achats;
}


void Commande::afficherachats() const {
	for (int i = 0; i < m_achats.size() ; ++i)
	{	std::vector<int> quantitepanier=getclient().getquantitepanier();
		std::cout<<" - "<<m_achats[i].gettitre()<<" - "<<quantitepanier[i]<<std::endl;
	}
	
}


std::ostream& operator<< (std::ostream& os, const Commande& commande){
    os << "Informations Commande : "<<std::endl<< "Client :"<<commande.getclient().getprenom()<<" "<<commande.getclient().getnom()<<std::endl<<"Etat : "<<commande.getstatut()<<std::endl<<"Produits :"<<std::endl;
    commande.afficherachats();
    return os;
}