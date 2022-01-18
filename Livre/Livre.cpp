#include <iostream> 
#include "Livre.h"


Livre::Livre(std::string titre, Auteur auteur, std::string langue,
std::string genre, long int ISBN, Date date) : _titre(titre), _auteur(auteur),
_langue(langue), _genre(genre), _ISBN(ISBN), _date(date) { }

std::string Livre::titre() const {
	return _titre;
}

Auteur Livre::auteur() const{
	return _auteur;
}

std::string Livre::langue() const {
	return _langue;
}

std::string Livre::genre() const {
	return _genre;
}

long int Livre::ISBN() const {
	return _ISBN;
}

Date Livre::date() const {
	return _date;
}

void Livre::changeDispo() {
	if (_dispo == true){
		_dispo = false;
	}
	else _dispo = true;
}

bool Livre::isDispo() const {
	return _dispo;
}

std::ostream& operator<< (std::ostream& os, const Livre& livre){
	os << livre.titre() << std::endl; 
	if (livre.isDispo()){
		os << "Dispo" << std::endl;
	}
	else os << "Pas Dispo" << std::endl;  
	
	return os;
}