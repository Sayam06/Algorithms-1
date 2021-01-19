def binarySearch (arr, l, u, x): 
  
    if u >= l: 
  
        mid = l + (u - l) // 2
  
        if arr[mid] == x: 
            return mid  
        elif arr[mid] > x: 
            return binarySearch(arr, l, mid-1, x) 
        else: 
            return binarySearch(arr, mid + 1, u, x) 
  
    else: 
        return -1
  
arr = [ 22, 23, 40, 45, 70, 74, 88, 90 ] 
x = 23
  
res = binarySearch(arr, 0, len(arr)-1, x) 
  
if res != -1: 
    print ("Element is present at % d" % res) 
else: 
    print ("Element is not present") 