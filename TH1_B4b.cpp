#include <iostream>
using namespace std;
#include <cmath>
int main (){
    
    double a, b, c, p;
    cout << "Nhap a = ";
    cin >> a;  
    cout << "Nhap b = ";
    cin >> b;
    cout << "Nhap c = ";
    cin >> c;
    p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << " Ket qua S = " << S;
    return 0;

}