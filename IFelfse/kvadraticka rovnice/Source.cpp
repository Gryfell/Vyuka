#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
	int a, b, c, d, x_1, x_2;

	cout << "Zadejte postupne koeficienty a,b,c kvadraticke rovnice ax^2+bx+c=0:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	d = b ^ 2 - 4 * a * c;//vzororecek pro vypocet diskriminantu
	x_1 = (-b + sqrt(d)) / (2*a);//koøen 1
	x_2 = (-b - sqrt(d)) / (2*a);//koøen 2

	cout << d << endl;//test vypsani
	cout << x_1 << endl;//test vypsani
	cout << x_2 << endl;//test vypsani

	if (a,b,c,d!=0) {
		cout << "rovnice ma 2 realne koreny= " << x_1 << ",x2= " << x_2 << endl;

	}
		

		



		return 0;
}