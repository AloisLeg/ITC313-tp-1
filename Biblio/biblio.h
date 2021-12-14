#include <string.h> 
#include <list>
#include <iostream>


#ifndef BIBLIO_H
#define BIBLIO_H



class Biblio {

public:
   Biblio(std::list<Auteur> listAuteurs , std::list<Livre> listLivres, std::list<Emprunts> livresEmpruntes);
   std::list<Auteur> listAuteurs();
   std::list<Livre> listLivres();
   std::list<Emprunts> livresEmpruntes();
   void addToListAuteurs(Auteur auteur);
   void addToListLivres(Livre livre);
   void addToLivresEmpruntes(Emprunt emprunt);
   
private:
   std::list<Auteur> _listAuteurs;
   std::list<Livre> _listLivres;
   std::list<Emprunts> _livresEmpruntes;
  
};




#endif // BIBLIO_H
