#include "biblio.h"
#include <string.h> 
#include <list>
#include <iostream>


Biblio::Biblio(std::list<Auteur> listAuteurs , std::list<Livre> listLivres, std::list<Emprunts> livresEmpruntes) : _listAuteurs(listAuteurs), _listLivres(listLivres), _livresEmpruntes(livresEmpruntes) {
}


std::list<Auteur> listAuteurs(){
   return _listAuteurs;
}

std::list<Livre> listLivres(){
   return _listLivres;
}

std::list<Emprunts> livresEmpruntes(){
   return _livresEmpruntes;
}


void addToListAuteurs(Auteur auteur){
	_listAuteurs.push_front(auteur); 
}


void addToListLivres(Livre livre){
	_listLivres.push_front(livre); 
}


void addToLivresEmpruntes(Emprunt emprunt){
	_livresEmpruntes.push_front(emprunt); 
}