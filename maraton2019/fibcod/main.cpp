#include <iostream>

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
        for (j = 0; j < 2; j++)
            ans.mat[i][j] = (i == j);

    while (p) {
        if (p & 1) 
            ans = matMul(ans, base);
       
        base = matMul(base, base);
        p >>= 1;
    }
    return ans;
}

int main()
{
    Matrix fib;
    fib.mat[0][1] = 1;
    fib.mat[0][0] = 1;
    fib.mat[1][0] = 1;
    fib.mat[1][1] = 0;
    Matrix base_mat = fib;

    Matrix ans = matPow(base_mat, 6);
    cout << ans.mat[0][1] << endl;
}
