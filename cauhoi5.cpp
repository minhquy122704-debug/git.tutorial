#include <iostream>
using namespace std;
#include <cmath>
int main (){
   double xa, ya, xb, yb, xc, yc;
   cout << "Nhap toa do diem A (xa, ya): ";
    cin >> xa >> ya;
    cout << "Nhap toa do diem B (xb, yb): ";
    cin >> xb >> yb;
    cout << "Nhap toa do diem C (xc, yc): ";
    cin >> xc >> yc;
    double ab = sqrt((xb - xa)*(xb - xa) + (yb - ya)*(yb - ya));
    double ac = sqrt((xc - xa)*(xc - xa) + (yc - ya)*(yc - ya));
    double bc = sqrt((xc - xb)*(xc - xb) + (yc - yb)*(yc - yb));
    cout << "ab =" << ab << endl;
    cout << "ac =" << ac << endl;
    cout << "bc =" << bc << endl;
   
    return 0;
}