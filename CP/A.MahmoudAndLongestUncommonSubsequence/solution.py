#!/usr/bin/env python


A = input()
B = input()

lastTotal
total = 0

for a in A:
    for b in B:
        if a != b:
            total += 1
        else:
            if total <= lastTotal:
                total = 0
            else:
                lastTotal = total
                total = 0
