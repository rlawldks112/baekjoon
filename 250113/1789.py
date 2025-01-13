S=int(input())
count=0
for i in range(S//2+1):
    S-=i+1
    count+=1
    if S<0:
        print(count-1)
        break
    elif S==0:
        print(count)
        break