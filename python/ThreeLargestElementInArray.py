import sys 
 
def print3largest(arr, n): 
    
    if (n < 3):       
        print("Array Size Less Than 3") 
        return
      
    third = first = second = -sys.maxsize 
      
    for i in range(0, n): 
      
        if (arr[i] > first): 
          
            third = second 
            second = first 
            first = arr[i] 
            
        elif (arr[i] > second): 
          
            third = second 
            second = arr[i] 
          
        elif (arr[i] > third): 
            third = arr[i] 
      
    print("Three largest elements are",first, second, third) 
    
arr = [1,20,-4,10,90,21,60] 
n = len(arr) 
print3largest(arr, n) 
