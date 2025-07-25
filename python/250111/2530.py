hour, min, sec= input().split()
r= int(input())
sec=int(sec)+r
hour=int(hour)
min=int(min)
while sec>=60:
    sec=sec-60
    min+=1
    while min>=60:
        min-=60
        hour+=1
while hour>=24:
    hour=hour-24
print(hour, min, sec)
print("git")