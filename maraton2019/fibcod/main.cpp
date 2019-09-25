#include <iostream>
#include <vector>

using namespace std;

struct Matrix {
    long mat[2][2];
};

Matrix matMul(Matrix a, Matrix b)
{
    Matrix ans;
    int i, j, k;
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
            for (ans.mat[i][j] = k = 0; k < 2; k++)
                ans.mat[i][j] += (a.mat[i][k] * b.mat[k][j]) % 524288;
    return ans;
}

Matrix matPow(Matrix base, int p)
{
    Matrix ans;
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++){
            ans.mat[i][j] = (i == j);
        }

    while (p) {
        if (p & 1){
            cout << (p & 1) << endl;
            ans = matMul(ans, base);
        }
        base = matMul(base, base);
        p >>= 1;
    }
    return ans;
}

void sol(unsigned int t, int c, vector<int> cad)
{
    Matrix fib;
    fib.mat[0][1] = 1;
    fib.mat[0][0] = 1;
    fib.mat[1][0] = 1;
    fib.mat[1][1] = 0;
    Matrix base_mat = fib;
    for (int k = cad.size() - 1; k >= 0; --k) {
        int value = cad[k];
        if (value != 0) {
            Matrix asl = matPow(base_mat, c + 2);
            t += asl.mat[0][1];
        }

        ++c;
    }
    cout << t << endl;
}

int main()
{
    Matrix fib;
    fib.mat[0][1] = 1;
    fib.mat[0][0] = 1;
    fib.mat[1][0] = 1;
    fib.mat[1][1] = 0;
    Matrix base_mat = fib;

    int b;
    int state = 1;
    while (cin >> b) {
        state = 1;
        vector<int> cadena;
        cadena.reserve(400000);
        if (b == 0)
            return 0;
        for (int i = 0; i < b; ++i) {
            int bi;
            cin >> bi;
            for (int j = 0; j < bi; j++) {
                cadena.push_back(state);
            }
            if (state == 0)
                state = 1;
            else
                state = 0;
        }
        sol(0, 0, cadena);
    }
}
