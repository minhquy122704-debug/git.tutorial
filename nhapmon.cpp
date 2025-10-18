#include <iostream>
using namespace std;
#include <cmath>
int main (){
    int x ,y;
    cout << "Nhap x = ";   
    cin >> x;
    cout << "Nhap y = ";
    cin >> y;
    cout << "Gia tri cua bieu thuc la ";
    2 * exp( -x + y ) / (1 + x*x + y*y);
return 0;

}
