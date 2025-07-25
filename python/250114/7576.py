a=input()
a=list(a)
length=10
for i in range(len(a)-1):
    if a[i+1]==a[i]:
        length+=5
    elif a[i+1]!=a[i]:
        length+=10
print(length)