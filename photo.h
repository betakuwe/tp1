#pragma once

#include "multimedia.h"

/**
* La classe de photo
*/
class Photo : public Multimedia
{
private:
	double m_width; /** Le latitude */
	double m_height; /** La longtitude */

public:
	/** Constructeurs */
	Photo(std::string filetype, 
		std::string filename, 
		double width, 
		double height);

	/** Destructeur */
	~Photo();

	/** Accesseurs */
	double getWidth() const;
	double getHeight() const;

	/** Modifieurs */
	void setWidth(const double width);
	void setHeight(const double height);
};

/** M�thode d'affichage */
std::ostream& operator<< (std::ostream& out, const Photo& photo);