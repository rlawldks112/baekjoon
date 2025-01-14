N=int(input())
for n in range(N):
    r,e,c=input().split()
    r=int(r)
    e=int(e)
    c=int(c)
    if e-r==c:
        print("does not matter")
    elif e-r>c:
        print("advertise")
    elif e-r<c:
        print("do not advertise")