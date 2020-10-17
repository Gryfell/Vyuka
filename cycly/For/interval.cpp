#include <iostream>
using namespace std;


int main() {
	int i1, i2, i3, i4;
	cout << "Zadejte levou mez 1. intervalu:" << endl;
	cin >> i1;
	cout << "Zadejte pravou mez 1. intervalu:" << endl;
	cin >> i2;
	cout << "Zadejte levou mez 2. intervalu:" << endl;
	cin >> i3;
	cout << "Zadejte pravou mez 2. intervalu:" << endl;
	cin >> i4;


	cout << "Dvojice cisel, jejichz soucet lezi v nekterem z intervalu:\n	(1. cislo je z prvniho intervalu a 2. z druheho intervalu)" << endl;

	for (int i=i1; i <= i2; i++) {
		for (int j=i3; j <= i4; j++) {
			cout << "[" << i << "," << j << "]";
						
		}
	}
	
	return 0;
}