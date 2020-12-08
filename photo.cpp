#include "photo.h"

Photo::Photo(std::string filetype, 
    std::string filename, 
    double width = 0, 
    double height = 0)
    : Multimedia{filetype, filename}, m_width{width}, m_height{height}
{
}

Photo::~Photo()
{
}

double Photo::getWidth() const
{
    return m_width;
}

double Photo::getHeight() const
{
    return m_height;
}

void Photo::setWidth(const double width)
{
    m_width = width;
}

void Photo::setHeight(const double height)
{
    m_height = height;
}

std::ostream& operator<<(std::ostream& out, const Photo& photo)
{
    out << "Photo(" << photo.getFilename() << "."
        << photo.getFiletype() << ", "
        << photo.getWidth() << ", "
        << photo.getHeight() << ")";
    return out;
}
