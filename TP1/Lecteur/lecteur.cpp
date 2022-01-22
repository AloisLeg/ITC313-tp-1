/**
 * @Author: Dominique Ginhac <d0m>
 * @Lecteur:   2019-10-15T09:46:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Summary:  Methods - Helpers functions
*/

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


std::ostream& operator<< (std::ostream& os, const std::list<long int>& liste){
   os << "La liste d'iSBN est : "  << std::endl;
    for (auto it= liste.begin(); it!=liste.end(); ++it){
      os << "-" <<*it << std::endl;
    }

    return os;
}

/**
 * 
 * Helper functions 
 * 
*/

 