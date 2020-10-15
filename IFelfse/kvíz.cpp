#include <iostream>
#include <string>
using namespace std;


char odpoved;


int microsoft();
int mysql();
int android();


int main() {
	cout << "ahoj" << endl;
	cout << "vitej v mem kvizu......\n.............................." << endl;
	int kontrola;
	kontrola = microsoft();
	if (kontrola == 0) {
		return 0;
	}
	kontrola = mysql();
	if (kontrola == 0) {
		return 0.;
	}
	kontrola = android();
	if (kontrola == 0) {
		return 0;
	}
	return 0;
}


int microsoft() {
	cout << "kdo zalozil microsoft?\n a) steve jobs\n b) tim cook\n c) bill gates\n d) mark zuckerberk" << endl;
	cin >> odpoved;

	if (odpoved == 'c')
	{

		cout << "spravne" << endl;
		return 1;
	}

	else {
		cout << "spatne" << endl;
		return 0;
	}
}


int mysql() {
	cout << "kdo vlastní MySQL?\n a) MICROSOFT\n b) apple\n c) google\n d) oracle" << endl;
	cin >> odpoved;

	if (odpoved == 'd')
	{

		cout << "spravne" << endl;
		return 1;
	}

	else {
		cout << "spatne" << endl;
		return 0;
	}
}





int  android() {
	cout << "jaky je code name pro android ?\n a) kit kat\n b) lolipop\n c) cupcake\n d) jelly bean" << endl;
	cin >> odpoved;

	if (odpoved == 'b')
	{

		cout << "spravne" << endl;
		return 1;
	}

	else {
		cout << "spatne" << endl;
		return 0;
	}
}





