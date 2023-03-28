// string object common methods.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S1 = "hello , welcome to  programming .";

    cout << S1.append("@Programming advices") << endl; // add words to end of string

    cout << S1.length() << endl; // count chars number of string

    cout << S1.at(4) << endl; // to now specific char in string
    cout << S1.insert(6, "Abdo") << endl; // to add a word to specific place in string
    cout << S1.substr(8, 4) << endl; // find at specific index number of chars 
    S1.push_back('H'); // at end of string add char
    cout << S1 << endl;
    S1.pop_back(); // at the end of string delete char
    cout << S1 << endl;

    cout << S1.find("Abdo") << endl; // find a word in string
    cout << S1.find("abdo") << endl; // find a word in string

    if (S1.find("abdo") == S1.npos) {
        cout << "not found !"; // check if word exists in a string 
    }

    S1.clear(); // delete all string 
    cout << S1;

}

