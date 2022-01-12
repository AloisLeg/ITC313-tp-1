#include <string.h> 
#include <list>
#include <iostream>
#include "../Auteur/auteur.h"
#include "../Livre/Livre.h"
#include "../Emprunt/Emprunt.h"
#include "../Date/date.h"
#include "../Lecteur/lecteur.h"


#ifndef BIBLIO_H
#define BIBLIO_H



class Biblio {

public:
   Biblio(std::list<Auteur> listAuteurs , std::list<Livre> listLivres, std::list<Emprunt> livresEmpruntes);
   std::list<Auteur> listAuteurs();
   std::list<Livre> listLivres();
   std::list<Emprunt> livresEmpruntes();
   void addToListAuteurs(Auteur auteur);
   void addToListLivres(Livre livre);
   void addToLivresEmpruntes(Emprunt emprunt);
   
private:
   std::list<Auteur> _listAuteurs;
   std::list<Livre> _listLivres;
   std::list<Emprunt> _livresEmpruntes;
  
};

std::ostream& operator<< (std::ostream& os, Biblio& biblio);
//std::ostream& operator<< (std::ostream& os, Emprunt& emprunt);

#endif // BIBLIO_H
