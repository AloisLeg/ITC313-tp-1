#include "biblio.h"
#include <string.h> 
#include <list>
#include <iostream>


Biblio::Biblio(std::list<Auteur> listAuteurs , std::list<Livre> listLivres, std::list<Lecteur> listLecteurs,std::list<Emprunt> livresEmpruntes) : _listAuteurs(listAuteurs), _listLivres(listLivres), _listLecteurs(listLecteurs), _livresEmpruntes(livresEmpruntes) {
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

std::list<Lecteur> Biblio::listLecteurs(){
   return _listLecteurs;
}


void Biblio::addToListAuteurs(Auteur auteur){
	_listAuteurs.push_front(auteur); 
}


void Biblio::addToListLivres(Livre livre){
	_listLivres.push_front(livre); 
}

void Biblio::addToListLecteurs(Lecteur lecteur){
   _listLecteurs.push_front(lecteur); 
}

void Biblio::addToLivresEmpruntes(Emprunt emprunt){
	_livresEmpruntes.push_front(emprunt); 
}

void Biblio::removeToLivresEmpruntes(Lecteur lecteur, Livre livre){
   for (auto it = _livresEmpruntes.begin(); it != _livresEmpruntes.end(); it++){
      Emprunt tempEmprunt = *it;
      if (livre == tempEmprunt.livre() && lecteur == tempEmprunt.lecteur()){
         _livresEmpruntes.remove(tempEmprunt);
      }
   }
}

void Biblio::emprunterLivre(Lecteur lecteur, Livre livre, Date dateEmprunt){
		bool indLivre = false;
      bool indEmprunt = true;

      for (auto it = _listLivres.begin(); it != _listLivres.end(); it++){
         Livre tempLivre = *it;
         if (livre == tempLivre){
            indLivre = true;
         }
         if (indLivre == true){
            for (auto it = _livresEmpruntes.begin(); it != _livresEmpruntes.end(); it++){
               Emprunt tempEmprunt = *it;
               if (livre == tempEmprunt.livre()){
                  indEmprunt = false;
               }
               else {
                  Emprunt newEmprunt(dateEmprunt, lecteur, livre);
                  addToLivresEmpruntes(newEmprunt);
               }
            }
         }
      }
      if (indLivre == false){
         std::cout << "Echec de l'emprunt, le livre n'est pas dans la bibliotheque" << std::endl << std::endl;
      }
      else if (indEmprunt == false){
         std::cout << "Echec de l'emprunt, le livre est déja emprunté par une autre personne" << std::endl << std::endl;
      } 
      else {
         std::cout << "Nouvel emprunt effectué" << std::endl << std::endl; 
      } 
}

void Biblio::rendreLivre(Lecteur lecteur, Livre livre){
   bool indLivre = false;
   bool indEmprunt = false;
   for (auto it = _listLivres.begin(); it != _listLivres.end(); it++){
      Livre tempLivre = *it;
      if (livre == tempLivre){
         indLivre = true;
      }
      if (indLivre == true){
         for (auto it = _livresEmpruntes.begin(); it != _livresEmpruntes.end(); it++){
            Emprunt tempEmprunt = *it;
            if (livre == tempEmprunt.livre() && lecteur == tempEmprunt.lecteur()){
               indEmprunt = true;
               removeToLivresEmpruntes(lecteur, livre);
            }
         }
      }
   }

   if (indLivre == false){
      std::cout << "Echec du retour, le livre n'est pas dans la bibliotheque" << std::endl << std::endl;
   }
   else if (indEmprunt == false){
      std::cout << "Echec du retour, le livre n'est pas emprunté ou déja emprunté par une autre personne" << std::endl << std::endl;
   } 
   else {
      std::cout << "Retour confirmé" << std::endl << std::endl; 
   } 
}


void Biblio::chercherLivresParAuteur(Auteur auteur){
   for (auto it = _listLivres.begin(); it != _listLivres.end(); it++){
      Livre tempLivre = *it;
      if (auteur == tempLivre.auteur()){
         std::cout << "Livre trouvé : " << tempLivre << std::endl;
      }
   }
}

void Biblio::chercherEmpruntsParLecteur(Lecteur lecteur){
   for (auto it = _livresEmpruntes.begin(); it != _livresEmpruntes.end(); it++){
      Emprunt tempEmprunt = *it;
      if (lecteur == tempEmprunt.lecteur()){
         std::cout << "Emprunt trouvé : " << tempEmprunt << std::endl;
      }
      std::cout << "Nombre d'emprunts trouvé : " << std::endl;
   }
}

void Biblio::livresEmpruntesPourcentage(){
   std::cout << "Livres empruntés : " << _livresEmpruntes << std::endl;
   double pourcentage = double(_livresEmpruntes.size())/double(_listLivres.size())*100;
   std::cout << "Pourcentage de livres empruntés : " << pourcentage << "%" << std::endl;
}

/*void Biblio::classementLecteurs(){
   std::cout << "Classement des lecteurs : " << _livresEmpruntes << std::endl;
   double pourcentage = _livresEmpruntes.size()/_listLivres.size*100;
   std::cout << "Pourcentage de livres empruntés : " << pourcentage << std::endl;
}*/


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

std::ostream& operator<< (std::ostream& os, std::list<Lecteur> lecteurs){ 
   for (auto it= lecteurs.begin(); it!=lecteurs.end(); ++it){
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


   os << "La liste des lecteurs est : "  << std::endl << std::endl;
   os << biblio.listLecteurs() << std::endl;


   os << "La liste d'emprunts est : "  << std::endl << std::endl;
   os << biblio.livresEmpruntes() << std::endl;


   return os;
}