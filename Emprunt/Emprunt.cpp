#include <iostream>
#include <string>
#include "Emprunt.h"

Emprunt::Emprunt(Date dateemprunt, Lecteur lecteur, Livre livre) : _dateemprunt(dateemprunt), _lecteur(lecteur), _livre(livre) {}

Date Emprunt::dateemprunt() const{
	return _dateemprunt;
}

Livre Emprunt::livre() const{
	return _livre;
}

Lecteur Emprunt::lecteur() const{
	return _lecteur;
}