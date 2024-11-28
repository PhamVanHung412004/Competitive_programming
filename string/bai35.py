list_arr = []
while(True):
    s = list(map(str,input().split('-')))
    for i in range(len(s)):
        list_arr.append(s[i])
    
    if (s == ""):
        break



print(list_arr)