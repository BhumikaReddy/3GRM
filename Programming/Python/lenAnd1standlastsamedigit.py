lis=['abc','xyz','aba','1221']
def len_same(y):
    x=[]
    for i in y:
        if len(i)>=2 and i[0]==i[-1]:
            x.append(i)
    return x
print(len_same(lis))
