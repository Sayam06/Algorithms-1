import sys 

def max(arr,n,min):
    for i in range(0,n):
        if min < arr[i]:
            min=arr[i]
            print(min)

        else:
            print(min)

arr = [1,2,3,4,1,10,22,2002,12,2001]
max(arr,len(arr),sys.minint)
            