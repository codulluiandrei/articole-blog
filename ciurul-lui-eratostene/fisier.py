v = [0] * 1000001
def ciur():
    v[0] = v[1] = 1
    for i in range(2, int(1000001 ** 0.5) + 1):
        if v[i] == 0:
            for j in range(2, 1000001 // i + 1):
                v[i * j] = 1
