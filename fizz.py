#Fizzbuzz problem
n=int(input()) #read the input from the user
for i in range(1,n+1,2):
    if i%3==0:
        print("Solo") #prints solo if num % 3 is 0
    elif i%5==0:
        print("learn") #prints solo if num % 5 is 0
    elif i%3==0 and i%5==0:
        print("sololearn") #prints solo if num % 3 and num % 5 is 0
    else:
        print(i)
