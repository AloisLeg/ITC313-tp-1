#include "lecteur.h"
#include "../Date/date.h"
#include <string>
#include <list>
#include <iostream>


Lecteur::Lecteur(int id, std::string name, std::string surname, std::list<long int> liste) : _id(id), _name(name), _surname(surname), _liste(liste) {
}

int Lecteur::id() const {
   return _id; 
}

std::string Lecteur::name() const {
   return _name;
}

std::string Lecteur::surname() const {
    return _surname;
}

std::list<long int> Lecteur::liste() const {
   return _liste; 
}

void Lecteur::updateId(int newId) {
   _id = newId; 
}

void Lecteur::addToList(long int newISBN) {
   _liste.push_front(newISBN); 
}

bool Lecteur::operator == (const Lecteur& l) const {
   return 
      l.id() == _id;
}

std::ostream& operator<< (std::ostream& os, const Lecteur& lecteur){
   os << "id : " << lecteur.id() << std::endl;
   os << "Nom : " << lecteur.name() << std::endl;
   os << "Prénom :" << lecteur.surname() << std::endl;
   os << lecteur.liste() << std::endl;

    return os;
}


std::ostream& operator<< (std::ostream& os, const std::list<long int>& liste){
   os << "La liste d'iSBN est : "  << std::endl;
    for (auto it= liste.begin(); it!=liste.end(); ++it){
      os << "-" <<*it << std::endl;
    }

    return os;
}


 