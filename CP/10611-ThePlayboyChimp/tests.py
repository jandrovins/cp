#!/usr/bin/env python

f = open("t", "w")

f.write("50000\n")
cont = 0
for i in range(0,350000,7):
    f.write("{} ".format(i))
    cont += 1


f.write("\n")
print(cont)
