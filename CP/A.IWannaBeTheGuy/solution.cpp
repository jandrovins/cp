#include <iostream>

using namespace std;

int main()
{
    int N, a, tmp;
    cin >> N;
    bool arr[N];
    for (int i = 0; i < N; ++i) {
        arr[i] = false;
    }
    cin >> a;
    for (int i = 0; i < a; ++i) {
        cin >> tmp;
        arr[tmp - 1] = true;
    }
    cin >> a;
    for (int i = 0; i < a; ++i) {
        cin >> tmp;
        arr[tmp - 1] = true;
    }
    for (int i = 0; i < N; ++i) {
        if (arr[i] == false) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}
