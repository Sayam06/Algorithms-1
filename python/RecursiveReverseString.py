def rev(str): 
    if len(str) == 0: 
        return
      
    str2 = str[0] 
    rev(str[1:]) 
    print(str2, end='') 
  
str = "algorithms"
rev(str)
