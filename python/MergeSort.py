def mergeSort(arr):
	if len(arr) > 1:

		mid = len(arr)//2
		a1 = arr[:mid]
		a2 = arr[mid:]
		mergeSort(a1)
		mergeSort(a2)

		i = j = k = 0

		while i < len(a1) and j < len(a2):
			if a1[i] < a2[j]:
				arr[k] = a1[i]
				i += 1
			else:
				arr[k] = a2[j]
				j += 1
			k += 1

		while i < len(a1):
			arr[k] = a1[i]
			i += 1
			k += 1

		while j < len(a2):
			arr[k] = a2[j]
			j += 1
			k += 1



arr = [12,10,2001,1,5,7,2002,22]
mergeSort(arr)

for i in range(len(arr)):
    print(arr[i],end=" ") 



