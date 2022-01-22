#include "lecteur.h"
#include <iostream>
#include "../Date/date.h"

int main() {
  

  Lecteur Lecteur1(012345, "Philippe", "Bouchon");
  //std::list<int> Lec1Liste = Lecteur1.liste();
  std::cout << Lecteur1.name() << " " << Lecteur1.surname() << std::endl;
  std::cout << "L'ID de l'utilisateur Lecteur1 est " << Lecteur1.id() << std::endl;
  Lecteur1.updateId(345456);
  std::cout << "L'ID de l'utilisateur Lecteur1 est " << Lecteur1.id() << std::endl;
  Lecteur1.addToList(123456789);
  Lecteur1.addToList(1234569);
  Lecteur1.addToList(1234789);
  Lecteur1.addToList(12456789);

  std::cout<<Lecteur1.liste();
  return 0;
}