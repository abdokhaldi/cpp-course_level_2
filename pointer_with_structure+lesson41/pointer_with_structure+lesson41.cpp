// pointer_with_structure+lesson41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct stEmployee {
    string name;
    int age;
};

int main()
{
    
    stEmployee Employee , *ptr;

    Employee.name = "abdenabi khaldi ";
    Employee.age = 27;

    ptr = &Employee;

    cout << "Name : " << ptr->name << endl;
    cout << "Age : " << ptr->age << endl;

}

