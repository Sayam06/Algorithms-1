def find(a, x): 
    ctr = 0
      
    for i in a: 
        if i == x: ctr += 1
    return ctr 
  
arr = [2002,1,12,12,12,22,1,2001,10] 
x = 1
print(find(arr, x))