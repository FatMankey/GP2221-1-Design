#pragma once
#include <fstream>
#include <iostream>
#include <string>
class FileReader
{
public:
	FileReader();
	~FileReader();
	std::string ReadFile( std::string Filename, int value);
	std::string PassFile(std::string value);
	
private:
	int value1;
};

