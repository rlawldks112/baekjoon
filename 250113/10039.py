sum=0
for i in range(5):
    A=int(input())
    if A<40:
        A=40
    sum+=A
print(sum//5)