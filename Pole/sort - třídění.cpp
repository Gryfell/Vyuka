#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	const int delka_pole = 10;
	int pole[delka_pole]{1,9,8,6,4,7,2,3,5,0};
	
	cout << "pole pred setridenim: ";


	for (int i=0; i < 10; i++)
		
		cout << pole[i] << ' ';

	sort(pole, pole + delka_pole);//znamenko serazeni nelze otocit, pri sortu bude vzdy < --- napada me za sort dat hned reverse a vypsat to az pak
								  //reverse(pole, pole + delka_pole);

	cout << endl<< "pole po setrideni: ";


	for (int i = 0; i < 10; i++)
		cout <<pole[i] << ' ';








}