// file_append_mode_53.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void openAndWriteinFile(string& fileName){
fstream myFile;

myFile.open(fileName, ios::out);

if (myFile.is_open()) {

	for (int i = 0; i <= 7; i++) {
		for (int j = 7; j > i; j--) {
			myFile << j;
		}
		myFile << endl;
	}
     myFile << "i am just testing . \n";
	myFile.close();

	
}
}

// add more content to text file
void openAndAppendFile(string fileName) {
	cout << "please write something : ";
	string name = "";
	getline(cin, name);

	fstream myFile;
	  myFile.open(fileName, ios::out | ios::app);

	if (myFile.is_open()) {

		myFile << endl;
		for (int i = 1; i <= 10; i++) {
			myFile << "[" << i << "]" << name << endl;
		}

		myFile.close();

	}
}


// read file content
void ReadFile(string fileName) {
	fstream myFile;
	myFile.open(fileName, ios::in);

	if (myFile.is_open()) {

		string Line;

		while (getline(myFile,Line) ){
			cout << Line << endl;
		}
		myFile.close();
	}
}

void GenerateFileContent() {
	string fileName = "test_file.txt";
	openAndWriteinFile(fileName);
	openAndAppendFile(fileName);
	ReadFile(fileName);
}


int main()
{
	GenerateFileContent();

	
}

