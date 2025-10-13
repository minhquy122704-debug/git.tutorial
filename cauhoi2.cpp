#include <iostream>
#include <cmath>
using namespace std;

int main (){

    double xa, ya, xb, yb;
    cout << "Nhap toa do diem A (xa, ya): ";
    cin >> xa >> ya;
    cout << "Nhap toa do diem B (xb, yb): ";
    cin >> xb >> yb;
    double d = sqrt((xb - xa)*(xb - xa) + (yb - ya)*(yb - ya));
    cout << "Khoang cach giua 2 diem A va B la: " << d << endl;
    
    return 0;
}