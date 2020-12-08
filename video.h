#pragma once

#include "multimedia.h"

/**
* La classe de vidéo
*/
class Video : public Multimedia
{
private:
	double m_duration; /** La durée de la vidéo */

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

/** Méthode d'affichage */
std::ostream& operator<< (std::ostream& out, const Video& video);