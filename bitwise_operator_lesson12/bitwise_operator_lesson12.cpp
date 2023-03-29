/*
// && operator :
  false vs false = false
  false vs true = false
  true vs false = false
  true vs true = true
*/

//Bitwise AND Operator

// 1 byte = 8 bits
// 
// byte : 0|1|2|3|4|5|6|7|
// calculate binary of 1 byte  :  1 2 4 8 16  32 64 128 

//  dicimal to binary
// example : convert 6 to binary , and convert 20 to binary

// dicimal : 6 = binary :  01100000
// dicimal : 20 = binary : 00101000

// compare between binary of 6 and binary of 20
// result of (6 & 20) is  : 4

#include <iostream>
using namespace std;
int main()
{
    cout << "Result : " <<  (6 & 20);

    
    
}


