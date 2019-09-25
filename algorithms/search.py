lista=[]
n=3

def search(k):
    if k== n+1:
        for i in lista:
            print(i, end="")
        print()
    else:
        lista.append(k)
        search(k+1)
        lista.pop()
        search(k+1)

search(0)
