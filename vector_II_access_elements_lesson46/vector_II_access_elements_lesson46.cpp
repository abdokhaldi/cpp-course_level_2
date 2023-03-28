

#include <iostream>
#include <vector>

using namespace std;


int main()
{

	

	vector <int> vNumbers {1,2,3,60,5,6,7,34,22,3,44,7,88,66,90,88,77,43,16};
	
	cout << "search for a number inside vector ?? \n\n";

	int Number = 0;
	do{
		cout << "please enter a number less than " << vNumbers.size() + 1 << endl;
        cin >> Number;
	} while (Number > vNumbers.size());

     cout << "the element you are searching for is  : " << vNumbers.at(Number-1) << endl;   //  access elements using .at(i)
	// cout << "the element you are searching for is  : " << vNumbers[Number - 1] << endl; // access elements using [i]
	
	 cout << "\n\n\n";
    //  __________________________________________
	
	 cout << " \n update elements :\n";
	 vNumbers.at(0) = 100;
	 vNumbers.at(1) = 1000;
	 vNumbers.at(2) = 587;
	 vNumbers.at(3) = 987;

	for (const int &i : vNumbers) {
		
		cout << " alement " <<  "[" << i << "]" << endl;
	
	}

}

