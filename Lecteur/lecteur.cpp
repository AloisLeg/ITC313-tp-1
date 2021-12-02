/**
 * @Author: Dominique Ginhac <d0m>
 * @Lecteur:   2019-10-15T09:46:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Summary:  Methods - Helpers functions
*/
#include "lecteur.h"
//#include <assert.h> 
#include <string>
#include <list>
#include <iostream>

Lecteur::Lecteur(std::string id, std::string name, std::string , std::list<int> liste) : _id(id), _name(name), _surname(), _liste(liste) {
}

std::string Lecteur::id() const {
   return _id; 
}

std::string Lecteur::name() const {
   return _name;
}

std::string Lecteur::surname() const {
    return _surname;
}

std::list<int> Lecteur::liste() const {
   return _liste.begin(); 
}

void Lecteur::updateId(std::string newId) {
   _id = newId; 
}

void Lecteur::addToList(int newISBN) {
   _liste.push_back(newISBN); 
}

/**
 * 
 * Helper functions 
 * 
*/

