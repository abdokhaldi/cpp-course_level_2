// pointer_to_void_lesson42.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{

	// using * (static_cast<float*> (ptr)) : for void pointer if you want to use diferent types for same pointer ;

	void * ptr;
	float x = 23.06;
	string N= "abdo";
	ptr = &x;
	cout << "address : " <<  ptr << endl;

	cout << "ptr 1 value : " << * (static_cast<float*> (ptr)) << endl;

	cout << "\n\n\n";

	ptr = &N;
	cout << "address : " << ptr << endl;

	cout << "ptr 2 value : " << *(static_cast<string*> (ptr)) << endl;


	
}
