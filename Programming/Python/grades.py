total_marks=int(input("enter your total score:"))
max_marks=1000
percent=(total_marks/max_marks)*100
if percent>=90:
    print("grade:S")
elif 90>percent>=80:
    print("grade:A")
elif 80>percent>=70:
    print("grade:B")
elif 70>percent>=60:
    print("grade:C")
else:
    print("fail")
