#include <../src/pwgen_lib/viewcontent.h>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void viewcontent() // Функция для просмотра файла
{
    string path = "used_passwords.txt";

    ifstream fin;
    fin.open(path);
    if (fin.is_open()) {
        cout << "\nUSED PASSWORDS : \n" << endl;
        char ch;
        while (fin.get(ch)) {
            cout << ch;
        }
    } else {
        cout << "!!!Error!!!  File not open!" << endl;
    }
    fin.close();
}
