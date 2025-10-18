#include <iostream>
using namespace std;
#include <cmath>
int main (){
    int n;
    double x ;
    cout << "Nhap n =";
    cin >> n;
    cout << "Nhap x =";
    cin >> x;
    double ketqua = pow(3 ,n) + 5 * fabs(x) + fabs(log(3 * x));
    cout << "Ket qua la: " << ketqua;
    return 0;
}