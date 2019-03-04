a = input()
a, n = a.split()
a = int(a)
n = int (n)
n = int_list = [int(x) for x in input().split()]
c = [];
d = {};
for i in n:
	temp  = i;
	c.extend(temp);
	if (d.temp == None):
		d.temp = 1
	else:
		d.temp = d.temp + 1
		if (d.temp > n):
			print("NO");
			exit();

d = dict.fromkeys(d, 0)
print("YES")
for i in c:
	d.i = d.i + 1;
	print (d.i, end = " ")
print()
