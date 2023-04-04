prezent = [False] * 10
n = int(input())
while (n):
    cifra = n % 10
    n = n // 10
    if cifra == 2:
        prezent[2] = True
if prezent[2] is True:
    print("cifra 2 apare in numar")
else:
    print("cifra 2 nu apare in numar")