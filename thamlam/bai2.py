a,b = map(str,input().split())

a = a.replace("5","6")
b = b.replace("5","6")

res = int(a) + int(b)

a = a.replace("6","5")
b = b.replace("6","5")
res1 = int(a) + int(b)

print(res,res1)

#     if (a[i] == '6'):
#         a[i] = '5'
    
# for i in range(len(b)):a
#     if (b[i] == '6'):
#         b[i] = '5'

# ress = int(a) + int(b)
# print(res,ress)