print("jaswanth mango business")
x=int(input("number of mangoes:"))
y=int(input("cost per each mango:"))
print(x)
print(y)
#calucation logic for total mango#
#total cost = number of mangoes * cost of each mango
total_bill=(x*y)
print("total cost of mangoes before discount:" ,total_bill)




if x<500:
    discount_amount=(0*total_bill)
elif x>=500 and x<1000:
    discount_amount=(0.1*total_bill)
else:
    discount_amount=(0.2*total_bill)



#discount amount=total cost of mangoes*discount amount
#total_amount after discount=total cost of before discount-discount amount




total_bill=(total_bill-discount_amount)
print("total amount after discount",total_bill)
