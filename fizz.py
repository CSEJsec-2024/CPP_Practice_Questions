#Fizzbuzz problem
n=int(input())
for i in range(1,n+1,2):
    if i%3==0:
        print("Solo")
    elif i%5==0:
        print("learn")
    elif i%3==0 and i%5==0:
        print("sololearn")
    else:
        print(i)
