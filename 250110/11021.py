re= int(input())
a=[]
for i in range(re):
    a, b=input().split()
    ans=int(a)+int(b)
    print("Case #"+str(i+1)+": "+str(ans))