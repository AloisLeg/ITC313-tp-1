#ifndef AUTEUR_H
#define AUTEUR_H
#include "../Date/date.h"
#include <string>


class Auteur {

	public:
		Auteur(int id, std::string nom, std::string prenom, Date datenaissance);
		int id() const;
		std::string nom() const;
		std::string prenom() const;
		Date datenaissance() const;
		bool operator == (const Auteur& a) const;

	private:
		int _id;
		std::string _nom;
		std::string _prenom;
		Date _datenaissance;


}; 
std::ostream& operator<< (std::ostream& os, Auteur& auteur);

#endif