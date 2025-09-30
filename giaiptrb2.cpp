#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c;
    cout <<" Cho a =";
    cin >> a;
    cout <<" Cho b =";
    cin >> b;
    cout <<" Cho c =";
    cin >> c;
    if (a == 0)
    {
        if (b ==0 && c ==0)
        cout << "vo so nghiem";
        else
        if (b ==0 && c !=0)
        cout << "vo nghiem";
        else
        cout << " nghiem cua x = " << -c/b;
    }
    else
    {
        float delta = b*b - 4*a*c;
        if (delta < 0)
        cout << "vo nghiem";
        else
        if (delta == 0)
        cout << "nghiem kep x1 = x2 = " << -b/(2*a);
        else
        {
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            cout << "hai nghiem phan biet:\n";
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }
    return 0;
}