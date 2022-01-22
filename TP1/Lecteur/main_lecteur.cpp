#include "lecteur.h"
#include <iostream>
#include "../Date/date.h"

int main() {
  

  Lecteur Lecteur1(012345, "Philippe", "Bouchon");
  //std::list<int> Lec1Liste = Lecteur1.liste();
  
  
  Lecteur1.updateId(345456);
  Lecteur1.addToList(123456789);
  Lecteur1.addToList(1234569);
  Lecteur1.addToList(1234789);
  Lecteur1.addToList(12456789);

  std::cout<<Lecteur1;
  return 0;
}
