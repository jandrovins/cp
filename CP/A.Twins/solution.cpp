#include <iostream>
#include <vector>

using namespace std;
int N;
int sum = 0;
int minimum = 101;
vector<int> V;

inline void min(int times, int index, int sum, int osum)
{
    if (index >= N)
        return;
    sum -= V[index];
    osum += V[index];
    if (osum > sum) {
        if (times < minimum)
            minimum = times;
        return;
    } else {
        min(times + 1, index + 1, sum, osum);
        min(times, index + 1, sum + V[index], osum - V[index]);
    }
}

int main()
{
    cin >> N;
    int tmp;
    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        V.push_back(tmp);
        sum += V[i];
    }
    min(1, 0, sum, 0);
    cout << minimum;
}
