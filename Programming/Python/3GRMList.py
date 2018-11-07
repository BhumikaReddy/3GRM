group=['vishalReddy','purshottamReddy','bhumika','sai','chandana','sahithi','akhilkumar','anilkumar','someswaraReddy','swetha','bhanuprasadReddy','likitha']
l=[]
for i in group:
    if len(i)<10:
        l.append(i)
print(l,"length is less than 10")
