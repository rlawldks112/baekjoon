test=int(input())
for j in range(test):
    a=[]
    a=input()
    for i in range(len(a)-2):
        print(a[i+2]*int(a[0]), end="")
    print("")