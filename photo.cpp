#include "photo.h"

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
