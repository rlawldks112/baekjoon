V=int(input())
a=input()
a=list(a)
A=0
B=0
for i in range(len(a)):
    if a[i]=='A':
        A+=1
    else: 
        B+=1
if A>B:
    print('A')
elif A<B:
    print('B')
else:
    print("Tie")