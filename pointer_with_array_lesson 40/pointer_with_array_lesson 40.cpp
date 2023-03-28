// pointer_with_array_lesson 40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	short count=0;

	int arr[10] = { 10,20,30,40,50,60,70,80,90,100 };

	int* ptr;
	ptr = arr;
	
	cout << "adresses of array elemnts : \n";
	cout << "the element " << "[" << count++ << "] address is : " << ptr << endl;
	cout << "the element " << "[" << count++ << "] address is : " << ptr + count << endl;
	cout << "the element " << "[" << count++ << "] address is : " << ptr + count << endl;
	cout << "the element " << "[" << count++ << "] address is : " << ptr + count << endl;
	cout << "the element " << "[" << count++ << "] address is : " << ptr + count << endl;
	cout << "the element " << "[" << count++ << "] address is : " << ptr + count << endl;
	cout << "the element " << "[" << count++ << "] address is : " << ptr + count << endl;
	cout << "the element " << "[" << count++ << "] address is : " << ptr + count << endl; 
	cout << "the element " << "[" << count++ << "] address is : " << ptr + count << endl;
	cout << "the element " << "[" << count++ << "] address is : " << ptr + count << endl;
    
	 cout << "\n \n values of array elemnts : \n";
	 
	 count = 0;
	 int number = 0;
	 
	 cout << "the element " << "[" << count++ << "] value is : " << *(ptr + number++)  << endl;
	 cout << "the element " << "[" << count++ << "] value is : " << *(ptr + number++) << endl;
	 cout << "the element " << "[" << count++ << "] value is : " << *(ptr + number++) << endl;
	 cout << "the element " << "[" << count++ << "] value is : " << *(ptr + number++) << endl;
	 cout << "the element " << "[" << count++ << "] value is : " << *(ptr + number++) << endl;
	 cout << "the element " << "[" << count++ << "] value is : " << *(ptr + number++) << endl;
	 cout << "the element " << "[" << count++ << "] value is : " << *(ptr + number++) << endl;
	 cout << "the element " << "[" << count++ << "] value is : " << *(ptr + number++) << endl;
	 cout << "the element " << "[" << count++ << "] value is : " << *(ptr + number++) << endl;
	 cout << "the element " << "[" << count++ << "] value is : " << *(ptr + number++) << endl;

	 cout << "\n\n____________________using for loop____________________\n\n";
	 ////      #######################____________ __________##########################________________________
	 for (int count = 0;count <10; count++) {
		 cout << "the element " << "[" << count << "] address is : " << ptr << endl;
		 
	 }

	 cout << "\n\n";

	 for (int count = 0; count < 10; count++) {
		 cout << "the element " << "[" << count << "] address is : " << *(ptr + count ) << endl;
	 }


	
}

