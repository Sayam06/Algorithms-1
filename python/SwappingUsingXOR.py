def swap(a,b):
    a^=b
    b^=a
    a^=b

    print("After Swapping : ",a,b)

a,b = 2002, 1
swap(a,b)