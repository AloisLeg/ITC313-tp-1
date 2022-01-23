#ifndef EMPRUNT_H
#define EMPRUNT_H

#include <iostream>
#include <string>
#include <string>
#include "../Date/date.h"
#include "../Livre/Livre.h"
#include "../Lecteur/lecteur.h"




class Emprunt {
public: 
	Emprunt(Date dateemprunt, Lecteur lecteur, Livre livre);
	Date dateemprunt() const;
	Lecteur lecteur() const;
	Livre livre() const;
	bool operator == (const Emprunt& e) const;

private:
	Date _dateemprunt;
	Lecteur _lecteur;
	Livre _livre;
	


}; 
std::ostream& operator<< (std::ostream& os, Emprunt& emprunt);

#endif