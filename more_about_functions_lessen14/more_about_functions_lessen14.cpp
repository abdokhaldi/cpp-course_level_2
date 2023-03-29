// function declaration VS defenation

#include <iostream>
using namespace std;

void sumNumbers(int, int);
int ReadNumber();


int main()
{
    int Number1 = ReadNumber();
    int Number2 = ReadNumber();
    sumNumbers(Number1, Number2);
}

void sumNumbers(int num1, int num2) {
    cout << num1 + num2;
}
int ReadNumber() {
    int Number;
    cout << "please enter number :";
    cin >> Number;
    while (cin.fail()){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "invalid number , try again ";
        cin >> Number;
    }
    return Number;
}