#pragma once
#include"Header.h"
#include"filework.h"

class interface
{
private:
	char choice;
	bool check;
public:
	interface()
	{
		check = 1;
	}
	void showmenu();
};