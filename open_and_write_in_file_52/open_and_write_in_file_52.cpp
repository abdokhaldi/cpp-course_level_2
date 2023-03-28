

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream myFile;

	myFile.open("test_file.txt", ios::out);

	if (myFile.is_open()) {

		for (int i = 0; i <= 7; i++) {
			for (int j = 7; j > i; j--) {
				myFile <<  j;
			}
			myFile << endl;
		}

		myFile.close();
	}
}

