


arr = []

def init():    
    for i in range(13):
        arr1 = [0] * 13
        arr.append(arr1)
def main():
    init()

    for i in range(1,len(arr)):
        for j in range(1,i + 1):
            if (i == 1 or i == j):
                arr[i][j] = 1
            else:
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1]
    n = int(input())

    for i in range(1,n + 1):
        for j in range(1, i + 1):
            print(arr[i][j], end =  " ")
        print()
main()




