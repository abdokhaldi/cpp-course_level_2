

#include <iostream>

using namespace std;

void FillTwoDimenArray_Multi_table(int x[10][10]) {
	for (int i = 0; i < 10;i++) {
		for (int j = 0; j < 10;j++) {
			x[i][j] = (i + 1) * (j + 1);
		}
	}
}
void PrintTableOfMultiPlicationTable(int x[10][10]) {

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%0*d ",2,x[i][j]);
		}
		cout << endl;
	}
}
int main()
{
	int x[10][10];

	FillTwoDimenArray_Multi_table(x);
	PrintTableOfMultiPlicationTable(x);
	


}

