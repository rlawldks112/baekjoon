while(1):
    a, b =input().split()
    if(a=='0' and b=='0'):
        break
    if int(a)>int(b):
        print("Yes")
    else:
        print("No")