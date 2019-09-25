#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int expected;
bool state = false;

inline int seed(int x, int s, int m)
{
    if (x == 0)
        return 0;

    int result = (seed(x - 1, s, m) + s) % m;
    expected -= result;
    return result;
}

int main()
{
    int s, m;

    while (cin >> s >> m) {
        expected = ((m * (m + 1)) / 2) - m;
        //cout << expected<< endl;
        seed(m, s, m);
        if (expected == 0)
            cout <<  setw(10) << s << setw(10) << m << "    "
                 << "Good Choice\n\n";
        else
            cout <<  setw(10) << s << right << setw(10) << m << "    "
                 << "Bad Choice\n\n";
    }
}
