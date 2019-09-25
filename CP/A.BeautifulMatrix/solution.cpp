#include <bits/stdc++.h>

using namespace std;

int main()
{
    int j, i;
    int temp;
    for (i = 1; i < 6; ++i) {
        for (j = 1; j < 6; ++j) {
            cin >> temp;
            if(temp == 1){
                cout << abs(3 - i) + abs(3 - j);
                return 0;
            }
        }
    }
}
