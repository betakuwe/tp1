#pragma once

#include "multimedia.h"

/**
* La classe de vid�o
*/
class Video : public Multimedia
{
private:
	double m_duration; /** La dur�e de la vid�o */

public:
	/** Constructeurs */
	Video(std::string filetype, std::string filename, double duration);

	/** Destructeur */
	~Video();

	/** Accesseurs */
	double getDuration() const;

	/** Modifieurs */
	void setDuration(const double duration);
};

/** M�thode d'affichage */
std::ostream& operator<< (std::ostream& out, const Video& video);