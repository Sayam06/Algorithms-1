def find(a, x): 
    count = 0
      
    for i in a: 
        if i == x: count += 1
    return count 
  
arr = [2002,1,12,12,12,22,1,2001,10] 
x = 1
print(find(arr, x))