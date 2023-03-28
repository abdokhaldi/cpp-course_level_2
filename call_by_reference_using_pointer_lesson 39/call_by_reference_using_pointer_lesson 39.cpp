// call_by_reference_using_pointer_lesson 39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void swape(int* a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 30;
    int b = 60 ;
    int c = 12;
    cout << a << "\n" << b << "\n";
    swape(&a, &b);
    cout << a << "\n" << b << "\n";
    cout << "\n\n_________________________________________\n\n";
    a = 43;
    b = 50;
    cout << a << "\n" << b << "\n";
    swape(&a, &b);
    cout << a << "\n" << b << "\n";
}

