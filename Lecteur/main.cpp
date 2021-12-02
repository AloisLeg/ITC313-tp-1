#include "lecteur.h"
#include <iostream>

int main() {
  
  Lecteur Lecteur1("phiphi", "Philippe", "Bouchon");
  std::cout << Lecteur1.name() << " " << Lecteur1.surname() << std::endl;
  std::cout << "L'ID de l'utilisateur Lecteur1 est " << Lecteur1.id() << std::endl;
  Lecteur1.updateId("Jean Louis");
  std::cout << "L'ID de l'utilisateur Lecteur1 est " << Lecteur1.id() << std::endl;
  Lecteur1.addToList(123456789);
  std::cout<<Lecteur1.liste();
  return 0;
}
