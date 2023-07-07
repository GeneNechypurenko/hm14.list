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

	cout << "Ââåä³òü ³íôî: ";
	getline(cin, str);
	return str;
}

int InputData(int position) {

	cout << "Ââåä³òü ³íäåêñ: ";
	cin >> position;
	if (cin.rdbuf()->in_avail() != 0)
	{
		cin.clear();
		cin.ignore((numeric_limits<streamsize>::max)(), '\n');
	}
	return position;
}