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
	int *m = new int[k];
	for (i = 0; i < k; i++) {
		cin >> m[i];
	}
	cin >> sdv;
	if (sdv <= 0){
		cout << "An error has occurred while reading input data" << endl;
		return 0;
	}
	int n[sdv], t[k-sdv];
	for (i = 0; i < sdv; i++) {
		n[i] = m[i];
	}
	for (i = 0; i < k - sdv; i++) {
		t[i] = m[i+sdv];
	}
	delete [] m;
	for (i = 0; i < k - sdv; i++) {
		cout << t[i] << " ";
	}
	for (i = 0; i < sdv; i++) {
		cout << n[i] << " ";
	}
	return 0;
}
