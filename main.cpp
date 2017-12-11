
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
	cin >> z;
	if (a <= 0){
		cout << "An error has occurred while reading input data" << endl;
		return 0;
	}
	int n[a], c[k-a];
	for (i = 0; i < a; i++) {
		n[i] = m[i];
	}
	for (i = 0; i < k - a; i++) {
		c[i] = m[i+a];
	}
	delete [] m;
	for (i = 0; i < k - a; i++) {
		cout << c[i] << " ";
	}
	for (i = 0; i < a; i++) {
		cout << n[i] << " ";
	}
	return 0;
}
