lis=[1,3,-45,56]
def lis_max(y):
    maxi=y[0]
    for i in y:
        if i>maxi:
            maxi=i
    return maxi
print(lis_max(lis))
def lis_min(y):
    mini=y[0]
    for i in y:
        if i<mini:
            mini=i
    return mini
print(lis_min(lis))
            
