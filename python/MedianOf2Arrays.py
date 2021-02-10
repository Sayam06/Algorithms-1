def median( arr1, arr2 , n):
	i,j,ctr = 0,0,0 
	
	m1,m2 = -1,-1

	while ctr < n + 1:
		ctr += 1

		if i == n:
			m1 = m2
			m2 = arr2[0]
			break
		elif j == n:
			m1 = m2
			m2 = arr1[0]
			break
		if arr1[i] <= arr2[j]:
			m1 = m2
			m2 = arr1[i]
			i += 1
		else:
			m2 = arr2[j]
			j += 1
	return (m1 + m2)/2

arr1 = [1, 10, 12, 22, 2001, 2002]
arr2 = [2, 5, 17, 19, 27, 300]

n1 = len(arr1)
n2 = len(arr2)

if n1 == n2:
	print(median(arr1, arr2, n1))
else:
	print("Arrays of Unequal Size")

