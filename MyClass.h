#pragma once

#include <string>
#include <iostream>

class MyClass
{
private:
	std::string m_filetype;
	std::string m_filename;

public:
	MyClass(std::string filetype, std::string filename);
	MyClass();

	~MyClass();

	std::string getFiletype() const;
	std::string getFilename() const;

	void setFiletype(const std::string filetype);
	void setFilename(const std::string filename);
};

std::ostream& operator<< (std::ostream& out, const MyClass& myclass);