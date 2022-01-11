#include <iostream>
#include <string>
#include "Emprunt.h"




Emprunt::Emprunt(Date dateemprunt, Lecteur& lecteur, Livre livre) : _dateemprunt(dateemprunt), _lecteur(lecteur), _livre(livre) {

}

Date Emprunt::dateemprunt() const{
	return _dateemprunt;
}

Livre Emprunt::livre() const{
	return _livre;
}

Lecteur Emprunt::lecteur() const{
	return _lecteur;
}


std::ostream& operator<< (std::ostream& os, Emprunt& emprunt){
	os << " L'emprunt de "<< emprunt.livre() << " effectué le " << emprunt.dateemprunt() << std::endl; 
	return os;
}