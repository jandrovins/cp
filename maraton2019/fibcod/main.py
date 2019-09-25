#!/usr/bin/env python

from sys import stdin


class Matrix():
    def __init__(self):
        self.mat = [[1, 1], [1, 0]]


def matMul(a, b):
    ans = Matrix()
    for i in [0, 1]:
        for j in [0, 1]:
            k = 0
            ans.mat[i][j] = 0
            for k in [0, 1]:
                ans.mat[i][j] += (a.mat[i][k] * b.mat[k][j]) % 524288

    return ans


def matPow(base, p):
    ans = Matrix()
    for i in [0, 1]:
        for j in [0, 1]:
            ans.mat[i][j] = int(i == j)

    p = int(p)
    while p:
        if(p & 1):
            print (p & 1)
            ans = matMul(ans, base)
        base = matMul(base, base)
        p >>= 1
    return ans


def sol(t, c, cad):
    base_mat = Matrix()
    k = len(cad) - 1
    while k >= 0:
        value = cad[k]
        if value != 0:
            asl = matPow(base_mat, c + 1)
            t += asl.mat[1][0]
        k -= 1
        c += 1

    print(t)


fib = Matrix()

state = 1
for line in stdin:
    cadena = []
    if line == "0\n":
        break
    lines = stdin.readline().strip("\n").split(" ")
    for ind in range(len(lines)):
        for cad_ind in range(int(lines[ind])):
            cadena.append(str(ind%2))

    sol(0,0,cadena)
