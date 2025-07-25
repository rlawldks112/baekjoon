N=int(input())
Q=[0,0,0,0,0]
for n in range(N):
    a,b=input().split()
    a=int(a)
    b=int(b)
    if a==0 or b==0:
        Q[4]+=1
    elif a>0 and b>0:
        Q[0]+=1
    elif a<0 and b>0:
        Q[1]+=1
    elif a<0 and b<0:
        Q[2]+=1
    elif a>0 and b<0:
        Q[3]+=1
for i in range(4):
    print("Q",i+1, ":",Q[i])
print("AXIS:", Q[4])