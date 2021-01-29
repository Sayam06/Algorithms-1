def Leaders(arr, n): 
     
    maxright = arr[n-1]    
    print maxright,     
    for i in range( n-2, -1, -1):         
        if maxright <= arr[i]:         
            print arr[i], 
            maxright = arr[i] 
          
arr = [21, 20, 50, 2, 18, 11 , 3, 6, 0]
Leaders(arr, len(arr))