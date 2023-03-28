
// some_funcs_in_cctype_lib_lesson51.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char x ;
    char y ;

    x = toupper('a') ;
    y = tolower('A');

        cout << "convert x to uppercase : " << x << endl;
        cout << "convert y to lower : " << y << endl;

        cout << "isupper('a')  : " << isupper('a') << endl; 
        cout << "islower('A')  : " << islower('A') << endl;

        cout << "islower('a')  : " << islower('a') << endl;
        cout << "isupper('A')  : " << isupper('A') << endl;

        cout << "is digit : " << isdigit('7') << endl;
        cout << "ispunct : " << ispunct('?') << endl;
}

