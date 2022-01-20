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

void Biblio::emprunterLivre(Lecteur lecteur, Livre livre, Date dateEmprunt){
		Emprunt newEmprunt(dateEmprunt, lecteur, livre);

}


std::ostream& operator<< (std::ostream& os, std::list<Auteur> auteurs){ 
	for (auto it= auteurs.begin(); it!=auteurs.end(); ++it){
      os << "-" <<*it << std::endl;
    }
	return os;
}

std::ostream& operator<< (std::ostream& os, std::list<Livre> livres){ 
	for (auto it= livres.begin(); it!= livres.end(); ++it){
      os << "-" <<*it << std::endl;
    }
	return os;
}

std::ostream& operator<< (std::ostream& os, std::list<Emprunt> emprunts){ 
	for (auto it= emprunts.begin(); it!=emprunts.end(); ++it){
      os << "-" <<*it << std::endl;
    }
	return os;
}



std::ostream& operator<< (std::ostream& os, Biblio& biblio){
   os << "La liste d'auteurs est : "  << std::endl << std::endl;
   os << biblio.listAuteurs() << std::endl;


   os << "La liste de livres est : "  << std::endl << std::endl;
   os << biblio.listLivres() << std::endl;


   os << "La liste d'emprunts est : "  << std::endl << std::endl;
   os << biblio.livresEmpruntes() << std::endl;


   return os;
}