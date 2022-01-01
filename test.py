plusSign = 0
minusSign = 0

str = input("input : ")
for i in str:
    if i == '+':
        plusSign += 1
    elif i == '-':
        minusSign += 1
        
if (minusSign + plusSign != 1):
    print("Invalid operation")
else:
    print(eval(str))