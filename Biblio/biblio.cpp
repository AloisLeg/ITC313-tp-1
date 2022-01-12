#include "biblio.h"
#include <string.h> 
#include <list>
#include <iostream>


Biblio::Biblio(std::list<Auteur> listAuteurs , std::list<Livre> listLivres, std::list<Emprunt> livresEmpruntes) : _listAuteurs(listAuteurs), _listLivres(listLivres), _livresEmpruntes(livresEmpruntes) {
}


std::list<Auteur> Biblio::listAuteurs(){
   return _listAuteurs;
}

std::list<Livre> Biblio::listLivres(){
   return _listLivres;
}

std::list<Emprunt> Biblio::livresEmpruntes(){
   return _livresEmpruntes;
}


void Biblio::addToListAuteurs(Auteur auteur){
	_listAuteurs.push_front(auteur); 
}


void Biblio::addToListLivres(Livre livre){
	_listLivres.push_front(livre); 
}


void Biblio::addToLivresEmpruntes(Emprunt emprunt){
	_livresEmpruntes.push_front(emprunt); 
}







std::ostream& operator<< (std::ostream& os, Biblio& biblio){
   os << "La liste d'auteurs est : "  << std::endl;
    for (auto it= biblio.listAuteurs().begin(); it!=biblio.listAuteurs().end(); ++it){
      os << "-" <<*it << std::endl;
    }

    os << "La liste de livres est : "  << std::endl;
    for (auto it= biblio.listLivres().begin(); it!=biblio.listLivres().end(); ++it){
      os << "-" <<*it << std::endl;
   }

   os << "La liste d'emprunts est : "  << std::endl;
    for (auto it= biblio.livresEmpruntes().begin(); it!=biblio.livresEmpruntes().end(); ++it){
      os << "-" <<*it << std::endl;
   }

   return os;
}