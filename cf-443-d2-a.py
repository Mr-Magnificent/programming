import re;

str = input();
x = re.findall('[a-z]', str);
a = {};
for i in x:
	a[i] = 1
print (len(a))