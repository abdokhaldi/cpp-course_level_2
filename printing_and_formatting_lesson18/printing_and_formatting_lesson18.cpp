// printing_and_formatting_lesson18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// formatting integers
void FormattingIntegers() {
    cout << "the Results of formatting Integers bellow: \n";
    int page = 1, totalPages = 10;
    printf("the page = %d \n", page);
    printf("the list of pages start from %d to %d \n" , page, totalPages);

    for(int i=2;i<=5;i++){
    printf("the number %0*d \n", i, page);
   }

    cout << endl;

    int Number = 4, Number2 = 7;
    printf("the result of %d + %d = %d \n" , Number, Number2, Number + Number2);
}

// formatting doubles and floats
void FormattingDoubleAndFloat() {
    cout << "the Results of formatting doubles and floats bellow: \n";
    double PI = 3.14159265;

    for (int i = 1; i <= 10; i++){
        int c = i;
       printf("[%d] the number %.*f \n",i, i ,PI);
        }

    cout << endl;

    float x = 4.0, y = 7.0;
    printf("the float division : %.3f / %.3f = %.3f \n", x, y, x / y);

    cout << endl;
    double c = 12.45;
    printf("the double values is : %.3f \n" , c);
    printf("the double values is : %.5f \n", c);

}

// formatting string and charachters 
void formatStringOfCharachters() {
    cout << "the Results of formatting string and  charachters bellow: \n";
    char name[] = "Abdenabi Khaldi";
    char country[] = "Morocco";

    printf("hello my name is  %s and welcom to %s \n", name, country);
    char Letter = 'S';
    for (int i = 1; i <= 5;i++) {
        printf("setting the width of Letter : %*c \n",i,Letter);
    }
}
int main()
{
    FormattingIntegers();
    cout << endl;
    FormattingDoubleAndFloat();
    cout << endl;
    formatStringOfCharachters();
}

