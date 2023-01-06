a = True
b = False
i = 1
j = 5
while b != True:
    print(i, end = ' ')
    i = i + 1
    if i == 6:
        b = True
        print(end = '\n')
while a != False:
    print(j, end = ' ')
    j = j - 1
    if j == 0:
        a = False
