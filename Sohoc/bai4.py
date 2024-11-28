const = int(1e9) + 7

def binpow(a , b):
    if (b == 0):
        return 1
    x = binpow(a, b / 2)
    if (b % 2 == 0):
        return x * x
    else:
        return x * x * a

a,b,k = map(int,input().split())


ans = binpow(a,b)

ans = str(ans)


print(ans)