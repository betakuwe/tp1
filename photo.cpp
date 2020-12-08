#include "photo.h"

Photo::Photo(std::string filetype, 
    std::string filename, 
    double width, 
    double height)
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
