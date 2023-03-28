// more_abt_variables_lesson17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// static variable
void func() {
 static int Number = 0;
    cout << "[" << Number << "]" << endl;
    Number++;

}

// automatic variables
void func2() {
    auto Number = 12;
    auto Double = 2.5;
    auto String = "my name is abdo";

    cout << "Number is : " << Number << endl;
    cout << "Double is : " << Double << endl;
    cout << "String is : " << String << endl;

}
int main()
{
    // practice static vars
    func();
    func();
    func();
    func();
    func();
    // practice auto vars
    cout << "\n\n\n";
    func2();
}

