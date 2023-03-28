
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void WriteContentInFile(string fileName) {
	 int count = 1;
	fstream MyFile;
	MyFile.open(fileName, ios::out);
	
	if (MyFile.is_open()) {
		
		MyFile << "[" << count++ << "]"  << " - this is a new file \n";
		MyFile << "[" << count++ << "]" << " - this is a new file \n";
		MyFile << "[" << count++<< "]" << " - this is a new file \n";

		MyFile.close();
	}
}

void LoadFileConentToVector( string fileName, vector<string> &vFileContent) {
	fstream MyFile;
	MyFile.open(fileName, ios::in);
	string Line;
	if(MyFile.is_open()){
	while (getline(MyFile, Line) ){
		
		vFileContent.push_back(Line);
	}
	MyFile.close();
	}
}

void  SaveVectorContentToFile(string fileName, vector<string>& vFileContent){
	fstream MyFile;
	MyFile.open(fileName, ios::out);

	if (MyFile.is_open()) {
		for (string& Line : vFileContent) {
			MyFile << Line << endl;
		}
		MyFile.close();
	}
}

void DeleteRecordFromFile (string fileName, string Record) {
	vector <string> vFileContent;
	LoadFileConentToVector(fileName, vFileContent);
	
	for (string &Line : vFileContent) {
		
		if (Line == Record) {
			
			Line = "";
			}
		}
		SaveVectorContentToFile(fileName, vFileContent);
}

void UpdateRecordFromFile(string fileName, string Record, string Replace) {
	vector <string> vFileContent;
	LoadFileConentToVector(fileName, vFileContent);

	for (string& Line : vFileContent) {

		if (Line == Record) {

			Line = Replace;
		}
	}
	SaveVectorContentToFile(fileName, vFileContent);
}
void PrintContent(string fileName) {
	fstream MyFile;
	MyFile.open(fileName, ios::in);
	
	if (MyFile.is_open()) {
		string Line;

		while (getline(MyFile, Line)) {
			
			cout << Line << endl;
		}
		MyFile.close();
	}
}





int main() {
	vector<string> vFileContent;
	string fileName = "test_file.txt";

	// befor update

	WriteContentInFile(fileName);
	cout << "file content before updated : \n";
	LoadFileConentToVector(fileName, vFileContent);

	PrintContent(fileName);

	//     After update
cout << "\n\nfile content after updated : \n\n";

vFileContent.at(0) = "[1] this content is updated .";
vFileContent.at(1) = "[2] this content is updated .";
vFileContent.at(2) = "[3] this content is updated .";

SaveVectorContentToFile(fileName, vFileContent);

PrintContent(fileName);

cout << "\n\nfile content after delete : \n\n";

DeleteRecordFromFile(fileName, "[1] this content is updated .");

PrintContent(fileName);

cout << " \n\n content after update \n\n";
UpdateRecordFromFile(fileName, "[3] this content is updated .", "this is a replacement ");
PrintContent(fileName);
}