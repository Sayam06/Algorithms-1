def sum(arr,n):

    for i in range(0,n):
        res=0
        for j in range(i,n):
            res+=arr[j]

        print(res, end = ' ')
    
arr[] = [1,2,3,4,5,6]
sum(arr,len(arr))
