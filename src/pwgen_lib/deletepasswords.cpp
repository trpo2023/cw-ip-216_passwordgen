#include <../src/pwgen_lib/deletepasswords.h>
#include <fstream>
#include <iostream>
using namespace std;

int deletepasswords()
{ //Функция удаления логина и пароля

    ifstream in("used_passwords.txt", ios::in);
    ofstream out("passnews.txt", ios::out);
    char buff[256];
    int num, i;

    cout << "Nomer stroki: " << endl;
    cin >> num;
    i = 0;
    while (!in.eof()) {
        in.getline(buff, 255);
        if (i == num)
            break;
        out << buff << endl;
        i++;
    }
    while (!in.eof()) {
        in.getline(buff, 255);
        out << buff << endl;
    }
    out.close();
    in.close();
    cout << "\nDELETED!\n ";
    remove("used_passwords.txt");
    rename("passnews.txt", "used_passwords.txt");
    return 0;
}