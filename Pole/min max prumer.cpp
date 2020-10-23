#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    int y, x, c, v, b, n, m, l, k, j;
   
    cout << "zadejte cislo: ";
    cin >> y;
    cout << "zadejte cislo: ";
    cin >> x;
    cout << "zadejte cislo: ";
    cin >> c;
    cout << "zadejte cislo: ";
    cin >> v;
    cout << "zadejte cislo: ";
    cin >> b;
    cout << "zadejte cislo: ";
    cin >> n;
    cout << "zadejte cislo: ";
    cin >> m;
    cout << "zadejte cislo: ";
    cin >> l;
    cout << "zadejte cislo: ";
    cin >> k;
    cout << "zadejte cislo: ";
    cin >> j;

    const int delka_pole=10;
    int pole[delka_pole]{ y,x,c,v,b,n,m,l,k,j };
    int*minimum= min_element(pole, pole + delka_pole);
    int*maximum= max_element(pole, pole + delka_pole);
 int prumer = (y + x + c + v + b + n + m + l + k + j) / delka_pole;

    cout << "minimum=" <<*minimum << endl;
    cout << "maximum=" <<*maximum << endl;
    cout << "prumer=" << prumer << endl;

    
    

    for (int i = 0; i < delka_pole;i++)
        cout << pole[i] << ' ';

    return 0;
}