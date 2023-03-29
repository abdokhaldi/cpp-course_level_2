
// default parametters and function overloading 

#include <iostream>
using namespace std;

int sumNumbers(int a,int b , int c , int d ) {
    int sum = (a + b) * (c + d);
    return sum;
}
int sumNumbers(int a, int b ) {
    int sum = a + b;
    return sum;
}

int sumNumbers(double a, double b, int c=0, int d=0) {
    int sum = a + b +c+d;
    return sum;
}
int main()
{
    cout << "sum of numbers  is : " << sumNumbers(20,40); // function overloaded : number of parmetters
    cout << endl;
    cout << "sum of numbers is : " << sumNumbers(5, 10,2,6); // function overloaded : number of parametters
    cout << endl;
    cout << "sum of numbers is : " << sumNumbers(5.6, 10.1,5.8,3.5); // type of parameters
}

