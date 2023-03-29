// Ore operator
// true vs true = true
// false vs true = true
// true vs false = true
// false vs false = false;


#include <iostream>
using namespace std;

int main()
{
    cout << "Result : " <<  (20 | 50);
   
}


/*
20 = 00101000
|
50 = 01001100
_____________
01101100 =  32+16+4+2

final result of (20 | 50) is 54

*/