#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>

#include "Logic.h"
#include "List.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    List<string> list;

    string menu[ROW];
    menu[0] = "������ � ������ � �������";
    menu[1] = "������ � ������ � ����";
    menu[2] = "������� ������ �� �����";
    menu[3] = "�������� �� ������� � �������";
    menu[4] = "�������� �� ������� � ����";
    menu[5] = "�������� ������";
    menu[6] = "Insert";
    menu[7] = "Remove at";
    menu[8] = "Find";
    menu[9] = "Replace";
    menu[10] = "Reverse";
    menu[11] = "�����";

    int select = 0;

    string str;
    int position = 0;

    while (true) {

        DisplayMenu(menu, select);

        char action = _getch();
        if (action == 0 || action == 224)
            action = _getch();

        switch (action) {

        case UP:
            select = (select - 1 + ROW) % ROW;
            break;

        case DOWN:
            select = (select + 1) % ROW;
            break;

        case ENTER:
            switch (select) {

            case ADD_TO_HEAD:
                system("cls");
                list.AddToHead(InputData(str));
                system("pause");
                break;

            case ADD_TO_TAIL:
                system("cls");
                list.AddToTail(InputData(str));
                system("pause");
                break;

            case DISPLAY:
                system("cls");
                list.Display();
                system("pause");
                break;

            case REMOVE_FROM_HEAD:
                system("cls");
                list.RemoveFromHead();
                system("pause");
                break;

            case REMOVE_FROM_TAIL:
                system("cls");
                list.RemoveFromTail();
                system("pause");
                break;

            case REMOVE_ALL:
                system("cls");
                list.RemoveAll();
                system("pause");
                break;

            case INSERT:
                system("cls");
                list.Insert(InputData(str), InputData(position));
                system("pause");
                break;

            case REMOVE_AT:
                system("cls");
                list.RemoveAt(InputData(position));
                system("pause");
                break;

            case FIND:
                system("cls");

                position = list.Find(InputData(str));

                if (position != -1)
                    cout << "������� �������� � ������ = " << position << endl;

                else
                    cout << "������� � ������ �� ��������" << endl;

                system("pause");
                break;

            case REPLACE:
                system("cls");

                position = list.Replace(InputData(str), "NEWDATA");

                if (position != -1)
                    cout << "������� �������� � ������ " << position << " �������" << endl;

                else
                    cout << "������� � ������ �� ��������" << endl;

                system("pause");
                break;

            case REVERSE:
                system("cls");
                list.Reverse();
                system("pause");
                break;

            case EXIT:

                return 0;
            }
            break;

        case ESC:

            return 0;
        }
    }
    return 0;
}