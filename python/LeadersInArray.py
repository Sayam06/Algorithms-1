def Leaders(arr, n): 
     
    maxright = arr[n-1]    
    print maxright,     
    for i in range( n-2, -1, -1):         
        if maxright <= arr[i]:         
            print arr[i], 
            maxright = arr[i] 
          
arr = [16, 17, 4, 3, 5, 2] 
Leaders(arr, len(arr))