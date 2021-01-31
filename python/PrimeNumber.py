import math

def prime(n):
 
    if (n <= 1):
        return False
 
    for i in range(2, int(math.sqrt(n))):
        if (n % i == 0):
            return False
 
    return True
 
 
if prime(21):
    print("Prime Number")
else:
    print("Non Prime")