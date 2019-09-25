#include <iostream>
#include <map>
#include <vector>

using namespace std;

int N, D, M, Y, C, ND, total, counter;
int oND = 0, oC = 0;

map<int, int> calendar = { { 0, 0 }, { 1, 31 }, { 3, 31 }, { 4, 30 }, { 4, 31 }, { 6, 30 }, { 7, 31 }, { 8, 31 }, { 9, 30 }, { 10, 31 }, { 11, 30 }, { 12, 31 } };

inline int past_days(int a)
{
    if (a == 0)
        return 0;

    return calendar[a] + past_days(a - 1);
}

inline bool is_leap()
{
    return Y % 400 == 0 || Y % 4 == 0;
}

inline int number_of_days()
{
    calendar[2] = is_leap() ? 29 : 28;
    if (D == 31 && M == 12) {
        cout << "JAJA\n";
        cout << D << " " << M << " " << Y << " " << ND << endl;
        return (Y + 1) * 365;
    }
    return D + past_days(M - 1) + Y * 365;
}

int main()
{
    while (cin >> N) {
        if (N == 0) {
            break;
        }
        total = counter = 0;
        cin >> D >> M >> Y >> oC;
        oND = number_of_days();
        if (N == 10)
            cout << D << " " << M << " " << Y << " " << ND << endl;

        for (int i = 1; i < N; ++i) {
            cin >> D >> M >> Y >> C;
            ND = number_of_days();
            if (N == 10)
                cout << D << " " << M << " " << Y << " " << ND << endl;
            if (ND - oND == 1) {
                total += (C - oC);
                counter++;
            }
            oC = C;
            oND = ND;
        }
        //cout << counter << " " << total << endl;
    }
}
