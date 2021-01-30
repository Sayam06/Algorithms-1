def missing(a, n): 
    i, sum = 0, 1
 
    for i in range(2, n + 2):
        sum += i
        sum -= a[i - 2]
    return sum
 
arr = [1, 2, 3, 4, 6]
arr.sort()
print(missing(arr, len(arr)))