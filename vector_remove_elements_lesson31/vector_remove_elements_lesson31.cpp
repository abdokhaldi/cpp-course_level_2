
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    
    vector <int>  vNumbers;
    // add elements 

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    vNumbers.push_back(90);

   cout <<  "first element : " << vNumbers.front() << endl; // print first element
   cout << "last element : " << vNumbers.back() <<  endl; // print last element
   vNumbers.clear(); // delete all elements
    cout << "size : " << vNumbers.size() << endl; // length/size  of vector
    
    cout << "capacity : " << vNumbers.capacity() << endl; // size of vector elements although if elements deleted
    
    int count= 1;

   /* for (int Number : vNumbers) {
       count++;
        cout << Number << endl;
         
        char test = 'Y';
        if (Number == 30) {
            

            cout << "now you are in element " << count;
            cin >> test;
            if (test == 'Y' || test =='y') {
                continue;
            }
            else {
                break;
            }
       }
    }*/
  
   for (int Number : vNumbers) {
       cout << "[" << count++ <<"]" << "this is number " << Number << endl;
    }

   
   
}

