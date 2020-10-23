#include <iostream>
#include <string>
using namespace std;

int main() {


    const int delka_pole = 10;
    int pole[delka_pole];
    for (int i = 0; i < delka_pole; i++)
        pole[i] = i + +1;

    for (int i = 0; i < delka_pole; i++)
        cout << pole[i] << ' ';
    return 0;
}