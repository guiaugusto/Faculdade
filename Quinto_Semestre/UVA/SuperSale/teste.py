fat = []

def fator(n):
    if n == 0:
        fat.append(0);
    elif n == 1:
        fat.append(1);
    else:
        fat.append(n*fat[n-1])

n = int(input())

i = 0
while i <= n:
    fator(i)
    i += 1

print(fat[n])
