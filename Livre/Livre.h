 #ifndef LIVRE
#define LIVRE

 #include <string>
 #include "date.h"
 #include "auteur.h"

class Livre {

public:
	Livre(std::string titre, Auteur auteur, std::string langue, std::string genre, long int ISBN, Date date);
	std::string titre() const;
	Auteur auteur()const;
	std::string langue() const;
	std::string genre() const;
	long int ISBN() const;
	Date date() const;

private:
	std::string _titre;
	Auteur _auteur;
	std::string _langue;
	std::string _genre;
	long int _ISBN;
	Date _date;


};

#endif