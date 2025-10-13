#include <iostream>
using namespace std;

int main() {

    int n;
    int tram, chuc, donvi;
    cout << "Nhap so co 3 chu so: ";
    cin >> n;
    tram = n / 100;
    chuc = (n / 10) % 10;
    donvi = n % 10;
    cout << "Chu so hang tram: " << tram << endl;
    cout << "Chu so hang chuc: " << chuc << endl;
    cout << "Chu so hang don vi: " << donvi << endl;
    
    return 0;
}