#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int x , y;
    cout << "Nhap x = ";
    cin >> x;
    cout << "Nhap y = ";
    cin >> y;
    cout << "Gia tri cua bieu thuc la ";
    double Ketqua = (2 * exp( -x + y ) / (1 + x*x + y*y));
    cout << Ketqua << endl;
    return 0;
}