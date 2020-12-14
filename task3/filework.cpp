#include "Header.h"
#include "filework.h"

void filework::readtext()
{
	file.open(path);
	if (!file.is_open())
	{
		cout << "The file is not opened!\n\n";
	}
	else
	{
		string read = "";
		cout << "The file is opened!\n\n";
		cout << "The message:\n";
		while (!file.eof())
		{
			getline(file, read);
			cout << '"' << read << '"' << endl << endl;
		}
	}
	file.close();
}

void filework::change()
{
	file.open(path);
	string text, input, word;
	if (!file.is_open())
	{
		cout << "the file was not opened again!\n\n";
	}
	else
	{
		cout << "Print the word you want to change: ";
		cin >> input;
		cout << "Now print the new word: ";
		cin >> word;
		system("CLS");

		while (!file.eof())
		{
			text.push_back(file.get());
		}

		string::size_type pos = text.find(input);

		while (pos != string::npos)
		{
			text.replace(pos, input.size(), word);
			pos = text.find(input);
		}
		cout << "Now your message looks like:\n" << '"' << text << '"' << endl;
	}
	file.close();
}