import sys 

for line in sys.stdin:
    line = line.strip("\n").split(" ")
    n, x = int(line[0]), int(line[1])
    c = sys.stdin.readline()
    c = c.strip("\n").split(" ")
    c = [int(i) for i in c]

    c.sort()
    counter = 0
    for i in c:
        counter += i * x
        if x > 1:
            x -= 1
    print(counter)
