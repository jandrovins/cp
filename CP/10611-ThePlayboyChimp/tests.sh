#!/usr/bin/env python

f = open("t", "w")

f.write("50000\n")
cont = 0
for i in range(50000):
    f.write("{}\n".format(i))
    cont += 1

f.write("25000\n")
for i in range(0,25000):
    f.write("{}\n".format(i))
