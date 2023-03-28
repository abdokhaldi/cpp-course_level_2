// vector_iterators_lesson48.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vNumbers = {10,20,30,40,50};

    vector <int> ::iterator itr;
    for (itr=vNumbers.begin();itr!=vNumbers.end();itr++){
        cout << *itr << " ";
    }
}

