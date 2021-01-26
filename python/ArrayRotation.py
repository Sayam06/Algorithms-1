  def leftRotatebyOne(arr, n): 
    temp = arr[0] 
    for i in range(n-1): 
        arr[i] = arr[i + 1] 
    arr[n-1] = temp         
   
arr = [1, 2, 3, 4, 5, 6, 7, 8,9,10] 
n=7
rotate = 2
for i in range(rotate): 
    leftRotatebyOne(arr, n) 

for i in range(size): 
    print ("% d"% arr[i], end =" ") 