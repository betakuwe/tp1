#pragma once

#include "multimedia.h"

/**
* La classe de vid�o
*/
class Video: public Multimedia
{
private:
	double m_duration; /** La dur�e de la vid�o */

public:
	/** Accesseurs */
	double getDuration() const;

	/** Modifieurs */
	void setDuration(const double duration);
};