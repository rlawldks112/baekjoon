a=input()
a=list(a)
count=0
for i in range(len(a)//2):
    if a[i]==a[-i-1]:
        count+=1
if count==len(a)//2:
    print("1")
else:
    print(0)