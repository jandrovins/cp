#!/usr/bin/env python

import sys

sys.setrecursionlimit(150000)

def chess(n , m):
    return int((n * m) / 64)

#def chessM(m):
#    if m < 8:
#        return 0
#    return 1 + chessM(m - 2)

def chessM(m):
    cont = 0
    while m >= 8:
        cont += 1
        m -= 2
    return cont

#def chessNM(n, m):
#    if n < 8 or m < 8:
#        return 0
#    cont = 0 
#    cont += chessM(n)
#    cont += chessM(m)
#    cont += chessNM(n-1,m-1)
#    return cont + 1

def chessNM(n, m):
    cont = 0
    while n >= 8 and m >= 8:
        cont += chessM(n)
        cont += chessM(m)
        cont += 1
        n -= 1
        m -= 1
    return cont


def chessNMimpar(n, m):
    if n < 8 or m < 8:
        return 0
    cont = 0
    cont += chessNM(n - 1, m)
    cont += chessM(m - 2)
    return cont

while True:
    try:
        line = input()
        n,m,s = line.split(" ")
        cont = 0
        n = int(n)
        m = int(m)
        if s == "1":
            cont += chessNM(n, m)
        else:
            cont += chessNMimpar(n, m)
        print(cont)

    except EOFError:
        break
