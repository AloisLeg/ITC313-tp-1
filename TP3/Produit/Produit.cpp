#include "Produit.h"


Produit::Produit(std::string titre, std::string description, int quantitedispo, double prixunitaire): m_titre(titre), m_description(description), m_quantitedispo(quantitedispo), m_prixunitaire(prixunitaire) {

}


std::string Produit::gettitre() const{
	return m_titre;
}


std::string Produit::getdescription() const{
	return m_description;
}


int Produit::getquantitedispo() const{
	return m_quantitedispo;
}


double Produit::getprixunitaire() const{
	return m_prixunitaire;
}


void Produit::changerquantite(double it) {

	m_quantitedispo+=it;
}


std::ostream& operator<< (std::ostream& os, const Produit& produit){
    os << produit.gettitre() << std::endl <<"Description du produit :" << std::endl <<produit.getdescription() << std::endl <<"Quantité Disponible : " << produit.getquantitedispo()<<std::endl<<"Prix unitaire : "<<produit.getprixunitaire()<<std::endl;
    return os;
}


bool operator== (const Produit& produit1, const Produit& produit2){
	if (produit1.gettitre()==produit2.gettitre())
	{ return true;	}
	else return false;
}
