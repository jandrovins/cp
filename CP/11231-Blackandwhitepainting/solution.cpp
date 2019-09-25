#include <iostream>

using namespace std;

int main()
{
    unsigned int a, b, c;
    while (cin >> a >> b >> c) {
        if (a + b + c == 0)
            break;
        if (c == 0) {
            cout << (a - 7) * (b - 7) / 2 << endl;
        } else {
            cout << ((a - 7) * (b - 7) + 1) / 2 << endl;
        }
    }
}
