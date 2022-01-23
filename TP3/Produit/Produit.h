#include <iostream>
#include <vector>
#include <string>

#ifndef PRODUIT_H
#define PRODUIT_H


class Produit {

	

	public:
		friend class Magasin; 
		Produit(std::string titre, std::string description, int quantitedispo, double prixunitaire);
		std::string gettitre() const;
		std::string getdescription() const;
		int getquantitedispo() const;
		double getprixunitaire() const;

		


	private: 
		void changerquantite(double it);
		std::string m_titre;
		std::string m_description;
		int m_quantitedispo;
		double m_prixunitaire;	


};

std::ostream& operator<< (std::ostream& os, const Produit& produit);

bool operator== (const Produit& produit1, const Produit& produit2);

#endif