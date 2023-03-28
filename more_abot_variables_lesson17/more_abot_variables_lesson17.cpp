

#include <iostream>
using namespace std;
int increaseStaticVar() {
    static int count = 0;
    for (int i = 1; i < 4; i++) {
        count = count + 1;
    }
    return count;
}
int main()
{
    cout << increaseStaticVar();
}

