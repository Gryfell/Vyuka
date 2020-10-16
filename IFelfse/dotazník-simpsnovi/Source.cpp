#include <iostream>
#include <string>
using namespace std;

int main() {
	char odpoved;
	cout << "vyber si nejakou postavu ze Simpsnových\na) Homer\nb) Bart\nc) Marge\nd) Liza\ne) Maggie" << endl;
	cin >> odpoved;
	switch (odpoved) {

	case 'a':
		cout << "Jmeno: Homer Simpson\n Vek: 39\nZamestnani: bezpecnostni technik ve springfieldske jaderne elektrarne" << endl;
		break;
	case 'b':
		cout << "Jmeno: Bart Simpson\nVek: 10\nZamestnani: student" << endl;
		break;
	case 'c':
		cout << "Marge Simpson\nVìk: 34\nZamìstnani: v domacnosti" << endl;
		break;
	case 'd':
		cout << "Jmeno: Liza Simpson\nVek: 8\nZamestnani: student" << endl;
		break;
	case 'e':
		cout << "Jmeno: Maggie Simpson\nVek: 1\nZamestnani: zadny" << endl;
		break;


	}
		
		
	return 0;
}