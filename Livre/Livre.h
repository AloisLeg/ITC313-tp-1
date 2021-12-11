 #include <string>
 #include "date.h"

class Livre {

public:
	Livre(std::string titre, std::string auteur, std::string langue, std::string genre, long int ISBN, Date date);
	std::string titre() const;
	std::string auteur() const;
	std::string langue() const;
	std::string genre() const;
	long int ISBN() const;
	Date date() const;

private:
	std::string _titre;
	std::string _auteur;
	std::string _langue;
	std::string _genre;
	long int _ISBN;
	Date _date;


};