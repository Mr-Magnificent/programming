import re;

str = input();
x = re.split('[+]', str);
x.sort(key=int);
out = '';
for i in x[:(len(x) - 1)]:
	out += i + '+';
out += x[-1];
print(out);