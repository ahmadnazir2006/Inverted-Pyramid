#include <iostream>
using namespace std;
int main() {
	int row, col;
	cin >> row >> col;
	int i = row;
	while (i >=1) {
		int j = 1;
		while (j<=i) {
			if (i>=j ) {
				cout << "*";
			}
			else {
				cout << " ";
			}
			j++;
		}
		cout << endl;
		i--;
	 }

}
