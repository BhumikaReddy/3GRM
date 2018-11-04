#marks card
srn=['a','b','c','d']
p=[100,98,85]
c=[34,76,89]
m=[45,95,80]
stu=dict(zip(srn,zip(p,c,m)))
key_max=max(stu.keys(),key=(lambda k:students[k]))
print(key_max,students[key_max])
key_min=min(stu.keys(),key=(lambda k:students[k]))
print(key_min,students[key_min])
