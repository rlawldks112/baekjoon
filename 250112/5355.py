test=int(input())
for i in range(test):
    a=[]
    a=input().split()
    a[0]=float(a[0])
    for j in range(len(a)-1):
        while(a[j+1]!=''):
            if a[j+1]=='@':
                a[0]*=3
                break
            elif a[j+1]=='%':
                a[0]+=5
                break
            elif a[j+1]=='#':
                a[0]-=7
                break
    print("{:.2f}".format(a[0]))