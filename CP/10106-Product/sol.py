from sys import stdin

cont =0;
for line in stdin:
    if(cont+1 == 2):
        cont = 0
        b = line
        print(int(a) * int(b))
        continue
    elif cont == 0:
        a = line
        cont += 1


#while (a = int(input())) && b = int(input()):
#    print(a*b)

