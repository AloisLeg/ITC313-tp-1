#ifndef LIVRE
#define LIVRE

 #include <string>
 #include "../Date/date.h"
 #include "../Auteur/auteur.h"

class Livre {

public:
	Livre(std::string titre, Auteur auteur, std::string langue, std::string genre, long int ISBN, Date date);
	std::string titre() const;
	Auteur auteur() const;
	std::string langue() const;
	std::string genre() const;
	long int ISBN() const;
	Date date() const;	
	void changeDispo();
	bool isDispo() const;

private:
	std::string _titre;
	Auteur _auteur;
	std::string _langue;
	std::string _genre;
	long int _ISBN;
	Date _date;
	bool _dispo = true;


};

std::ostream& operator<< (std::ostream& os, const Livre& livre);


#endif