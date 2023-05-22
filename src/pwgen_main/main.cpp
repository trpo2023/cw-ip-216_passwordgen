#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <iterator>
#include <locale.h>
#include <string>
#include <vector>

#include <../src/pwgen_lib/deletepasswords.h>
#include <../src/pwgen_lib/generatepassword.h>
#include <../src/pwgen_lib/generator.h>
#include <../src/pwgen_lib/newpassword.h>
#include <../src/pwgen_lib/passchanger.h>
#include <../src/pwgen_lib/passwordused.h>
#include <../src/pwgen_lib/viewcontent.h>

using namespace std;

int main()
{
    int x = 6;
    while (true) {
        if (x == 0)
            break;
        cout << "\n1 - Create login and generate password\n"
                "2 - View used logins and passwords\n"
                "3 - Change password for login\n"
                "4 - Delete login and password\n"
                "0 for exit\n\n";
        cin >> x;
        switch (x) {
        case 1:
            generator();
            break;
        case 2:
            viewcontent();
            break;
        case 3:
            passchanger();
            break;
        case 4:
            deletepasswords();
            break;
        case 0:
            break;
        default:
            cout << "x is undefined\n";
            break;
        }
    }
    return 0;
}