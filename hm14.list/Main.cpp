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
    menu[6] = "�����";

    int select = 0;

    string str;

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