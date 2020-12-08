#include "MyClass.h"

MyClass::MyClass(std::string filetype, std::string filename) 
	: m_filetype{filetype}, m_filename{filename}
{
}

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

std::string MyClass::getFiletype() const
{
	return m_filetype;
}

std::string MyClass::getFilename() const
{
	return m_filename;
}

void MyClass::setFiletype(const std::string filetype)
{
	m_filetype = filetype;
}

void MyClass::setFilename(const std::string filename)
{
	m_filename = filename;
}

std::ostream& operator<<(std::ostream& out, const MyClass& myclass)
{
	out << "MyClass(" << myclass.getFilename() << "." 
		<< myclass.getFiletype() << ")";
	return out;
}
