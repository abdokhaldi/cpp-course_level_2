// setw_manipulator_lesson19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "|-----------|---------------------------|-------------|\n";
    cout << "|  name     |            age            |    country  |\n";
    cout << "|-----------|---------------------------|-------------|\n";
    cout << "|" << setw(11) << "Abdo" << "|" << setw(27) << "27 years old" << "|" << setw(13) << "Morocco " << "|" << endl;
    cout << "|" << setw(11) << "abderr" << "|" << setw(27) << "23 years old" << "|" << setw(13) << "Rusia " << "|" << endl;
    cout << "|" << setw(11) << "Morad" << "|" << setw(27) << "55 years old" << "|" << setw(13) << "Colombia " << "|" << endl;
    cout << "|" << setw(11) << "ayoub" << "|" << setw(27) << "33 years old" << "|" << setw(13) << "German " << "|" << endl;
    cout << "|-----------|---------------------------|-------------|\n";

}
