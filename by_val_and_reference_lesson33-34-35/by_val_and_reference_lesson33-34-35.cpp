

#include <iostream>
using namespace std;

int func(int &x) {
   return  x++;
}

int main()
{
    int x = 10;
    cout << &x << endl;
   cout <<  func(x) << endl;
   int  a = x;
   cout << a;


}

