

#include <iostream>
using namespace std;

int main()
{
    // memorry management : new and delete 
    int* ptrX;
    float * ptrY;
    
    ptrX = new int;
    ptrY = new float;

    *ptrX = 50;
    *ptrY = 70;

    cout << *ptrX << endl;
    cout << *ptrY << endl;                        

    delete ptrX;
    delete ptrY;

    cout << "\n___________ dynamic arrays : new and delete ______________\n";

    int num;
    cout << "number of students  : " ;
    cin >> num;

    cout << endl;

    
    do {
        ptrY = new float[num];



        cout << "grades of student : " << endl;

        for (int i = 0; i < num; ++i) {
            cout << "enter student grade : ";
            cin >> *(ptrY + i);
        }

        cout << endl;

        cout << "Display grades of students : " << endl;
        for (int i = 0; i < num; ++i) {
            cout << "Student " << "[" << i + 1 << "] : " << *(ptrY + i) << endl;
        }

        delete[] ptrY;

        break;
    } while (num == 1);

    ptrY = new float(66.3);
    cout << endl << *ptrY << endl;
    delete ptrY;
   


}

