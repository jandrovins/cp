#include <bits/stdc++.h>

using namespace std;

inline void toggle(bool* s)
{
    if (*s == true) {
        *s = false;
    } else {
        *s = true;
    }
}

int main()
{
    unsigned int n;
    while (cin >> n && n != 0) {
        unsigned int sq = sqrt(n);
        if(sq * sq == n) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
