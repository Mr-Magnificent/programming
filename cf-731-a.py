str = input()
temp = ord("a") - 97
sum = 0
for i in str:
	temp1 = ord(i) - 97
	swalk = abs(temp - temp1)
	if (swalk < 13):
		sum += swalk
	else:
		sum += 26 - swalk
	temp = temp1
print(sum)
	