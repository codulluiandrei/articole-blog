def cmmdc(a, b):
    while b != 0:
        r = a % b
        a = b
        b = r
    return a
def cmmmc(a, b):
    d = cmmdc(a, b)
    return (a * b) / d
a = int(input())
b = int(input())
print(int(cmmdc(a, b)), , int(cmmmc(a, b)))
