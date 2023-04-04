prezent = [0] * 10
n = int(input())
while (n):
    cifra = n % 10
    n = n // 10
    if cifra == 2:
        prezent[2] = prezent[2] + 1
if prezent[2] > 0:
    print("cifra 2 apare in numar de " + str(prezent[2]) + " ori")
else:
    print("cifra 2 nu apare in numar")