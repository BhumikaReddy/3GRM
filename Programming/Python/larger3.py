#to find largest of 3 no
a=int(input("num1:"))
b=int(input("num2:"))
c=int(input("num3:"))
if a>b and b>c:
    print("a is the largest")
elif b>c and b>a:
    print("b is the largest")
else:
    print("c is the largest")
    
