// call_stack_lesson16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// call stack and call hierarchy
int sumNums() {
    return 5 + 10;
}
int function3() {
   return sumNums();
}
int function2() {
    return function3();
}
int function1() {
   return function2();
}
   
// recursion : function calls itself

// M down to N 
void PrintNdownToM(int M, int N) {
    int i = 0;
    if (M >= N) {

        cout << M << endl;
        PrintNdownToM(M - 1, N);
    }
}
    // power N^M using recursion function
int PowerBaseOfNumber(int Base, int Power) {
    if (Power == 0)
        return 1;
    else
        return (Base * PowerBaseOfNumber(Base, Power - 1));
    }
    


int main()
{
    //cout <<  function1();
   // PrintNdownToM(200000, 1);
   cout <<  "Result : " << PowerBaseOfNumber(5, 3);
}

