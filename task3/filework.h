#pragma once
#include"Header.h"
#include"filework.h"
#include"interface.h"

class filework
{
private:
	string path;
	ifstream file;
public:

	filework()
	{
		path = "input.txt";
	}

	void readtext();
	void change();
};

