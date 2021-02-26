def p(n):
	if n < 0:
		n=-n
	
	if n >= 0 and n < 10:
		return False	

	s,rem,num = 0,0,n
	
	while n > 0:
		rem = n%10
		s=(s*10) + rem
		n=n//10
	

	if s == num:
		return True
	else:
		return False
    
    
    
n = 2001
if p(n):
	print("Yes, it's a pallindrome")
else:
	print("Not a pallindrome")
