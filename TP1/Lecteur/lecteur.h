#include <iostream>
#include <string>
#include <list>
#include "../Date/date.h"

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
   bool operator == (const Lecteur& l) const;
   
private:
   int _id;
   std::string _name;
   std::string _surname;
   std::list<long int> _liste;
   
};

std::ostream& operator<< (std::ostream& os, const Lecteur& lecteur);
std::ostream& operator<< (std::ostream& os, const std::list<long int>& liste);

#endif // DATE_H


 