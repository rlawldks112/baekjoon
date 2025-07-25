N=int(input())
cute=0
notcute=0
for n in range(N):
    a=int(input())
    if a == 1:
        cute+=1
    else:
        notcute+=1
if cute>notcute:
    print("Junhee is cute!")
else:
    print("Junhee is not cute!")