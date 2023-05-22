#include <../src/pwgen_lib/newpassword.h>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

// Функция для добавления пароля в файл
void addUsedPassword(string username, string password, string file_name)
{
    ofstream file(file_name, ios::app);
    file << "LOGIN : " << username << " "
         << "PASSWORD : " << password << endl;
}

void NewUsedPassword(string str, string password, string file_name)
{
    ofstream file(file_name, ios::app);
    file << "LOGIN : " << str << " "
         << "NEWPASSWORD : " << password << endl;
}