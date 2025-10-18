#include <iostream>
using namespace std;
#include <cmath>
int main (){
    int x ,y;
    cout << "Nhap x = ";   
    cin >> x;
    cout << "Nhap y = ";
    cin >> y;
    cout << "Gia tri cua bieu thuc G = ";
    double G = x * y - x * x + x * y * y - pow(y,3);
    cout << G;
return 0;
}