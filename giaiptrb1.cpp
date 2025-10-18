#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b;
    cout <<"Cho a =";
    cin >> a;
    cout <<"Cho b =";
    cin >> b;
    if (a == 0)
    {
        if (b ==0)
        cout << "vo so nghiem";
        else
        cout << "vo nghiem";
    }
    else
    {
        cout << " nghiem cua x = " << -b/a;
    }
    return 0;
}