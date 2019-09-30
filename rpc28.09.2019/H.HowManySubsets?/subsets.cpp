#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

long long fact(long long w)
{
    if (w <= 1) {
        return 1;
    }
    return w * fact(w - 1);
}

int main()
{
    long long N, Q, S;
    vector<long long> nums;
    nums.reserve(10000100);

    cin >> N >> Q;
    for (long long i = 0; i < N; ++i) {
        long long tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    sort(nums.begin(), nums.end());

    std::vector<long long>::iterator lower;
    long long index;

    for (long long i = 0; i < Q; ++i) {
        cin >> S;
        if (S < nums[1]) {
            printf("0\n");
            continue;
        }
        if (S == nums[1]) {
            if(nums[0] + nums[1] <= S){
                printf("1\n");
                continue;
            }
            printf("0\n");
            continue;
        }
        lower = lower_bound(nums.begin(), nums.end(), S);
        index = lower - nums.begin();
        if (nums[index] == S) {
            --index;
        }
        if (index == nums.size())
            index--;

        long long cases = 0;
        long long i1, i2;
        for (long long l = index; l >= 1; --l) {
            if (nums[l] + nums[l - 1] <= S) {
                long long a = fact(l + 1);
                long long b = fact(l - 1);

                cases += (a / (2 * (b)));
                i1 = l - 1;
                i2 = l + 1;
                break;
            }
        }
        for (; i2 <=index && i1 >= 0; ++i2) {
            for (; i1 >= 0; --i1) {
                if (nums[i1] + nums[i2] <= S) {
                    cases += i1 + 1;
                    break;
                }
            }
        }
        printf("%lld\n", cases);
    }
}
