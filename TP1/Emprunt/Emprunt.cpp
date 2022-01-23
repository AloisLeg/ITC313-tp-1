#include <iostream>
#include <string>
#include "Emprunt.h"

 


Emprunt::Emprunt(Date dateemprunt, Lecteur lecteur, Livre livre) : _dateemprunt(dateemprunt), _lecteur(lecteur), _livre(livre) {
	_livre.changeDispo();
	_lecteur.addToList(_livre.ISBN());
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

bool Emprunt::operator == (const Emprunt& e) const {
	return 
		e.livre() == _livre && e.lecteur() == _lecteur;	
}


std::ostream& operator<< (std::ostream& os, Emprunt& emprunt){
	os << " Emprunt de "<< emprunt.livre() << " effectué le " << emprunt.dateemprunt() << " par " << emprunt.lecteur() << std::endl; 
	return os;
}