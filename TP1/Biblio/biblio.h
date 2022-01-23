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
   Biblio(std::list<Auteur> listAuteurs , std::list<Livre> listLivres, std::list<Lecteur> listLecteurs,std::list<Emprunt> livresEmpruntes);
   std::list<Auteur> listAuteurs();
   std::list<Livre> listLivres();
   std::list<Emprunt> livresEmpruntes();
   std::list<Lecteur> listLecteurs();
   void addToListAuteurs(Auteur& auteur);
   void addToListLivres(Livre& livre);
   void addToListLecteurs(Lecteur& lecteur);
   void addToLivresEmpruntes(Emprunt& emprunt);
   void removeToLivresEmpruntes(Lecteur lecteur, Livre livre);
   void emprunterLivre(Lecteur lecteur, Livre livre, Date dateEmprunt);
   void rendreLivre(Lecteur lecteur, Livre livre);
   void chercherLivresParAuteur(Auteur auteur);
   void livresEmpruntesPourcentage();
   void chercherEmpruntsParLecteur(Lecteur lecteur);
   
private:
   std::list<Auteur> _listAuteurs;
   std::list<Livre> _listLivres;
   std::list<Emprunt> _livresEmpruntes;
   std::list<Lecteur> _listLecteurs;
  
}; 

std::ostream& operator<< (std::ostream& os, std::list<Auteur> auteurs);
std::ostream& operator<< (std::ostream& os, std::list<Lecteur> lecteurs);
std::ostream& operator<< (std::ostream& os, std::list<Livre> livres);
std::ostream& operator<< (std::ostream& os, std::list<Emprunt> emprunts);
std::ostream& operator<< (std::ostream& os, Biblio& biblio);
//std::ostream& operator<< (std::ostream& os, Emprunt& emprunt);

#endif // BIBLIO_H
