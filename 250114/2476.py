N=int(input())
ans=0
for n in range(N):
    a, b, c=input().split()
    a=int(a)
    b=int(b)
    c=int(c)
    if a==b==c:
        prize=1000*a+10000
        print("모두 같음", prize)
    elif a!=b!=c and a!=c:
        temp=a
        if temp<b:
            temp=b
        if temp<c:
            temp=c
        prize=100*temp
        print("모두 다름", prize)
    else:
        temp=a
        if temp==b:
            temp=b
        elif temp==c:
            temp=c
        elif b==c:
            temp=b
        prize=100*temp+1000
        print("두개만 같음", prize)
    if ans<prize:
        ans=prize
print(ans)