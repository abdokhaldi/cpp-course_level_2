#pragma warning (disable : 4996)
#include <iostream>
#include <ctime>


using namespace std;

int main()
{
    time_t t = time(0);
    char* dt = ctime(&t);
    cout << "local date time is : " << dt << "\n";


    tm* gmtm = gmtime(&t);
    dt = asctime(gmtm);
    cout << "UTC date and time is : " << dt << "\n";

    cout << "\n\n Date time structure :: \n\n";

             // ####################################################################

    tm* now = localtime(&t);

   
    short i = 0;
    string arr[9] = { 
        "year : " ,
        "month : " , 
        "hour : " ,
        "minutes : " ,
        "seconds : " 
        ,"day of weak : ", 
        "day of month : " ,
        "day of year " , 
        "isdst : " 
    };

    cout << arr[i++] << now->tm_year + 1900 << endl;
    cout << arr[i++] << now->tm_mon + 1 << endl;
    cout << arr[i++] << now->tm_hour  << endl;
    cout << arr[i++] << now->tm_min << endl;
    cout << arr[i++] << now->tm_sec << endl;
    cout << arr[i++] << now->tm_wday << endl;
    cout << arr[i++] << now->tm_mday << endl;
    cout << arr[i++] << now->tm_yday << endl;
    cout << arr[i++] << now->tm_isdst << endl;
}

