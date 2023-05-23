rez = 0
def fact(n):
    global rez
    if n == 1:
        rez = 1
    else:
        fact(n - 1)
        rez = rez * n
n = int(input())
fact(n)
print(rez)
