
import string
a="the quick brown fox jumps over the lazy dog"
print(set(a))
b=list(string.ascii_lowercase)
print(set(b))
x=set(b)-set(a)
print(x)
if not x:
	print("panagram")
else:
	print("no")
#program to check whether a string is panagram or no
