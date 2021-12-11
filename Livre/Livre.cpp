#include "Livre.h"
#include "date.h"


Livre::Livre(std::string titre,std::string auteur, std::string langue, std::string genre, long int ISBN, Date date) : _titre(titre), _auteur(auteur), _langue(langue), _genre(genre), _ISBN(ISBN), _date(date) {
}

std::string Livre::titre() const {
	return _titre;
}

std::string Livre::auteur() const {
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