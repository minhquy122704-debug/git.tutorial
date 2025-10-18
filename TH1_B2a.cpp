#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int x;
    cout << "Nhap x = ";
    cin >> x;
    cout << " Gia tri cua bieu thuc F = ";
    double F = pow(x, 5) + 5 * pow(x, 5/3) - 6;
    cout << F;

return 0;
}
