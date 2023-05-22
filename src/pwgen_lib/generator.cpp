#include <../src/pwgen_lib/generatepassword.h>
#include <../src/pwgen_lib/generator.h>
#include <../src/pwgen_lib/newpassword.h>
#include <../src/pwgen_lib/passwordused.h>
#include <iostream>
#include <string>
using namespace std;

int generator()
{
    string username; // Название логина
    cout << "Vvedite USERNAME: ";
    cin >> username;
    int length; // Длина пароля
    cout << "Vvedite dliny parolya: ";
    cin >> length;

    string password; // Генерирует уникальный пароль
    do {
        password = generatePassword(length);
    } while (isPasswordUsed(password, "used_passwords.txt"));

    addUsedPassword(
            username,
            password,
            "used_passwords.txt"); // Добавляет этот новый пароль в
                                   // использованные

    return 0;
}