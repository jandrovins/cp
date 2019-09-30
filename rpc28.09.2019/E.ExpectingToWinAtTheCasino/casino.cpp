#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        if (x <= 2) {
            if (y == 0) {
                std::cout << "1" << std::endl;
                continue;

            } else {
                std::cout << "0" << std::endl;
                continue;
            }
            continue;
        }
        if (x % 2 != 0) {
            if (y == 0) {
                std::cout << "1" << std::endl;

            } else {
                std::cout << "0" << std::endl;
            }
            continue;
        } else {
            if (y == 0) {
                std::cout << "1" << std::endl;

            } else {
                std::cout << "0" << std::endl;
            }
        }
    }
    return 0;
}
