// vector_lesson28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>

using namespace std;

struct stEmployee {
	string first_name;
	string last_name;
    int salary;
   };


void ReadEmployeeInfo(vector <stEmployee> &vEmployee) {
	char addMore = 'Y';
	while (addMore == 'Y' || addMore == 'y') {
		stEmployee Employee; 

		cout << "first name : ";
		cin >> Employee.first_name;
		cout << "last name : ";
		cin >> Employee.last_name;
		cout << "salarry : ";
		cin >> Employee.salary;
		vEmployee.push_back(Employee);
		
		cout << "do you want to add more ? : ";
		cin >> addMore;
	}
}


void PrintEmployeeInfo(vector <stEmployee> &vEmployee) {
	 
	for (stEmployee& Employee: vEmployee) {
		cout << "first name : " << Employee.first_name << endl;
		cout << "last name :  " << Employee.last_name << endl;
		cout << "salary : " << Employee.salary << endl;
		cout << endl;
	}
}



int main()
{
		vector <stEmployee> vEmployee;

		ReadEmployeeInfo(vEmployee);
		cout << endl;
		
		cout << endl;
		PrintEmployeeInfo(vEmployee);

	   
	
}
	


