def merge_sort(l):
    length = len(l)
    c = []
    if length == 1:
        return l
    a = merge_sort(l[:int(length/2)])
    b = merge_sort(l[int(length/2):])
    i,j = 0,0
    for k in range(len(l)):
        if i == len(a):
            c.append(b[j])
            j += 1
            continue
        if j == len(b):
            c.append(a[i])
            i+=1
            continue
        
        if a[i] < b[j]:
            c.append(a[i])
            i += 1
        elif b[j] < a[i]:
            c.append(b[j])
            j += 1
    return c

lista = [4,2,6,3,8,5,1,7,10]
p = merge_sort(lista)
print(p)
