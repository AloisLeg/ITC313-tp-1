#include <iostream>
#include <vector>
#include <string>

class Produit {

	public:
		Produit(std::string titre, std::string description, int quantitedispo, double prixunitaire);
		std::string gettitre() const;
		std::string getdescription() const;
		int getquantitedispo() const;
		double getprixunitaire() const;


	private: 
		std::string m_titre;
		std::string m_description;
		int m_quantitedispo;
		double m_prixunitaire;		


};

std::ostream& operator<< (std::ostream& os, const Produit& produit);
