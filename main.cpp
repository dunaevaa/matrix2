#include <iostream>
using namespace std;
int main()
{
	int i;
	int k; 
	int a;
	cin >> k;
	if (k <= 0){
	cout << "An error has occurred while reading input data" << endl;
		return 0;
	}
	int *matrix = new int[k];
	for (i = 0; i < k; i++) {
		cin >> matrix[i];
	}
	cin >> sdv;
	if (sdv <= 0){
		cout << "An error has occurred while reading input data" << endl;
		return 0;
	}
	int left[sdv], right[k-sdv];
	for (i = 0; i < sdv; i++) {
		left[i] = matrix[i];
	}
	for (i = 0; i < k - sdv; i++) {
		right[i] = m[i+sdv];
	}
	delete [] matrix;
	for (i = 0; i < k - sdv; i++) {
		cout << right[i] << " ";
	}
	for (i = 0; i < sdv; i++) {
		cout << left[i] << " ";
	}
	return 0;
}
