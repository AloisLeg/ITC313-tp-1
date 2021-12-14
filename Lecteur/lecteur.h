/**
  * @File:     lecteur.h
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Date:     Fall 2021
  * @Course:   C++ Programming / Esirem 3A Informatique Electronique Robotique
  * @Summary:  Methods - Helpers functions
  */

#include <iostream>
#include <string>
#include <list>

#ifndef LECTEUR_H
#define LECTEUR_H

class Lecteur {
public:
   Lecteur(int _id, std::string _name="Inconnu", std::string _surname="Inconnu", std::list<long int> _liste={});
   std::string name() const;
   std::string surname() const;
   int id() const;
   std::list<long int> liste() const;
   void updateId(int newId);
   void addToList(long int newISBN);
   
private:
   int _id;
   std::string _name;
   std::string _surname;
   std::list<long int> _liste;
   
};

std::ostream& operator<< (std::ostream& os, const std::list<long int>& liste);

#endif // DATE_H


