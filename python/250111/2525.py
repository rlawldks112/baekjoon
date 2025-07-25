hour, min = input().split()
r= int(input())
min=int(min)+r
hour=int(hour)
while min>=60:
    min=min-60
    hour+=1
if hour>=24:
    hour=hour-24
print(hour, min)