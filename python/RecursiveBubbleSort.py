def bubblesort(arr,n):
    for i in range(n-2):
        if arr[i] > arr[i+1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]
    if n>1:        
        bubblesort(arr,n-1)   

arr = [10,4,30,9,1,-45,12,19]
n=len(arr)    
bubblesort(arr,n)
print(arr)