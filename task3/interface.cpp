#include "Header.h"
#include "filework.h"
#include "interface.h"

void interface::showmenu()
{
	filework work;

	while (check)
	{
		cout << "1. Change some word\n";
		cout << "2. Quit\n";
		cin >> choice;
		switch (choice)
		{
		case '1':
			system("CLS");
			work.readtext();
			work.change();
			break;
		case '2':
			system("CLS");
			check = 0;
			break;
		default:
			cout << "incorrect input!. Try again!\n";
			break;
		}
	}
}