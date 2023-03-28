
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vNumbers { 10,20,30,40 };

    try {

   cout << vNumbers.at(6) ;

    }
    catch (...) {

        cout << " Out of bound \n";
    }
    
}

