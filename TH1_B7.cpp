#include <iostream>
#include <cmath>
using namespace std;
int main (){
   double x1, y1, x2, y2 , x3, y3;
   double a, b, c;
   double chuvi, dientich,p;
    cout << "Nhap toa do diem A (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Nhap toa do diem B (x2, y2); ";
    cin >> x2 >> y2;
    cout << "Nhap toa do diem C (x3, y3): ";
    cin >> x3 >> y3;
    a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    b = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
    c = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
    chuvi = a + b + c;
    p = chuvi / 2;
    dientich = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Chu vi tam giac la: " << chuvi << endl;
    cout << "Dien tich tam giac la: " << dientich;
    return 0;
    
}