#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    cout << " a1, a2, a3, ..., an" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "a" << i;
        if (i < n) {
            cout << ", ";
        }
    }
    return 0;
}