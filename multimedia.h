#pragma once

#include <string>
#include <iostream>

/**
*	La classe de base.
*/
class Multimedia
{
private:
	std::string m_filetype; /** Objet multimédia */
	std::string m_filename; /** Nom du fichier */

public:
	/** Constructeurs */
	Multimedia(std::string filetype, std::string filename); 
	Multimedia();

	/** Destructeur */
	~Multimedia();

	/** Accesseurs */
	std::string getFiletype() const;
	std::string getFilename() const;

	/** Modifieurs */
	void setFiletype(const std::string filetype);
	void setFilename(const std::string filename);
};

/** Méthode d'affichage */
std::ostream& operator<< (std::ostream& out, const Multimedia& myclass);