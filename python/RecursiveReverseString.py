def rev(str): 
    if len(str) == 0: 
        return
      
    str2 = str[0] 
    rev(str2[1:]) 
    print(str2) 
  
str = "algorithms"
rev(str)
