def partition(arr,l,h): 
	i = ( l-1 )		  
	pivot = arr[h]	 

	for j in range(l , h): 

		if arr[j] < pivot: 
		
			i = i+1
			arr[i],arr[j] = arr[j],arr[i] 

	arr[i+1],arr[h] = arr[h],arr[i+1] 
	return ( i+1 ) 

def sort(arr,l,h): 
	if l < h: 
		pi = partition(arr,l,h) 
		sort(arr, l, pi-1) 
		sort(arr, pi+1, h) 

arr = [12,22,10,2002,1,20,7] 

sort(arr,0,len(arr)-1) 

for x in arr: 
	print (x)
