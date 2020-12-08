#include "multimedia.h"

Multimedia::Multimedia(std::string filetype, std::string filename) 
	: m_filetype{filetype}, m_filename{filename}
{
}

Multimedia::Multimedia()
{
}

Multimedia::~Multimedia()
{
}

std::string Multimedia::getFiletype() const
{
	return m_filetype;
}

std::string Multimedia::getFilename() const
{
	return m_filename;
}

void Multimedia::setFiletype(const std::string filetype)
{
	m_filetype = filetype;
}

void Multimedia::setFilename(const std::string filename)
{
	m_filename = filename;
}

std::ostream& operator<<(std::ostream& out, const Multimedia& myclass)
{
	out << "Multimedia(" << myclass.getFilename() << "." 
		<< myclass.getFiletype() << ")";
	return out;
}
