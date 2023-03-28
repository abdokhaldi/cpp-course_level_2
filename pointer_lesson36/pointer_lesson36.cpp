

#include <iostream>
using namespace std;


int main()
{
    // pointer 
    cout << "\n__________ using pinter  __________\n";

    int a=10, b=20, c=30;
    int* ptr;
    ptr = &a;
       ptr  = & a;
    cout << "a value of a : " << a << endl;
   cout << "an address of a variable a : " << &a << endl;
   cout << "a pointer address reference a: " << ptr ;

  cout << endl;
    
    ptr = &b;
    cout <<  "a value of b : " << b << endl;
    cout << "an address of  variable b : " << &b << endl;
    cout << "a pointer address reference b: " << ptr << endl;

    cout << "\n__________ by reference __________\n" ;
   
    /// by reference 
    
    int x=70;
    int& y = x; 
    
    y = 90;
    x = 100;
    y = x;
    y = y;
    x = 700;
    x = x;


  // int &y = c;   // it is incorrect to define a variable by reference with mor than 1 variables 

    
    cout << "\n reference of x is : " << &x << endl ;
    cout << "eference of y is : " << &y << endl;
    cout << " a value of x :  " << x << endl;
    cout << "a value of y : " << y << endl;
     cout <<" second y val : " << c;
    ///  dereferencing pointer;

    cout << "\n__________ dereferencing pointer  __________\n";
    *ptr = 1000; // change the value of variable by pointer
    cout << " open the address existing in a pointer  : " << *ptr << endl;
    cout << "the value of b after change it by pointer : " << b << endl;
    *ptr = a;
    cout << "change the value of b to value of a  : " << b << endl;
    
    cout << &a;
    cout << endl;
    cout << &b;

    cout << "\n__________________" << endl;

    int r = 20;
    int t = 30;  
    cout << &r;     
    cout << endl;
    cout << &t;

}




