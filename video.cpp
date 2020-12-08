#include "video.h"

Video::Video(std::string filetype, std::string filename, double duration)
	: Multimedia{filetype, filename}, m_duration{duration}
{
}

Video::~Video()
{
}

double Video::getDuration() const
{
	return m_duration;
}

void Video::setDuration(const double duration)
{
	m_duration = duration;
}
