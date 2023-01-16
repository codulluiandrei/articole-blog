def phi(euler, n):
    for i in range(1, n + 1, 1):
        euler[i] = i
    for i in range (2, n + 1, 1):
        if (euler[i] == i):
            for j in range(i, n + 1, i):
                euler[j] = euler[j] * (i - 1) / i;
    for i in range(1, n + 1, 1):
        print(int(euler[i]))
                
euler = [0 for i in range(1, 1000001, 1)]
n = int(input())
phi(euler, n)
