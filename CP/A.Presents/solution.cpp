#include <iostream>
#include <map>
#include <cstdlib>

using namespace std;

map<int, int> m;

int main()
{
    int N;
    cin >> N;
    int tmp;
    for (int i = 1; i <= N; ++i) {
        cin >> tmp;
        m[tmp] = i;
    }

    cout << m[1];
    for (int i = 2; i <= N; ++i) {
        cout << " " << m[i];
    }
}
