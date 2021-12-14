#include "auteur.h"

Auteur::Auteur(int id, std::string nom, std::string prenom, Date
datenaissance) : _id(id), _nom(nom), _prenom(prenom),
_datenaissance(datenaissance) {

} 

int Auteur::id() const {
	return _id;
}

std::string Auteur::nom() const {
	return _nom;
}

std::string Auteur::prenom() const {
	return _prenom;
}

Date Auteur::datenaissance() const {
	return _datenaissance;
}

std::ostream& operator<< (std::ostream& os, Auteur& auteur){ 
	os << "Auteur n° : " << auteur.id() << " --> " << auteur.nom() << " " << auteur.prenom() << "né(e) le :  " << auteur.datenaissance() << std::endl; 
	return os;
}

