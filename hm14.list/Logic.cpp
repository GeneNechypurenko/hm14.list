#include "Logic.h"

void DisplayMenu(string menu[ROW], int select)
{
	char marker = 149;
	system("cls");

	for (int i = 0; i < ROW; i++)
	{
		if (select == i)
		{
			cout << " " << marker << " ";
			cout << menu[i] << endl;
		}
		else
		{
			cout << "   ";
			cout << menu[i] << endl;
		}
	}
}

string InputData(string& str) {

	cout << "¬вед≥ть щось там: ";
	getline(cin, str);
	return str;
}