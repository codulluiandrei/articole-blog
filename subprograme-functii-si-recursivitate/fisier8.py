def fact(n):
	if n == 1:
		return 1
    	else:
        	return fact(n - 1) * n
n = int(input())
print(fact(n))
