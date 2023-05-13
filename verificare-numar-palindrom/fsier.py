def verifpal(a):
    copie = a
    oglinda = 0
    while (a > 0):
        oglinda = oglinda * 10 + a % 10
        a = a // 10
    if (oglinda == copie):
        return 1
    return 0        
a = int(input())
if (verifpal(a)):
    print("nr este palindrom")
else:
    print("nr nu este palindrom")
