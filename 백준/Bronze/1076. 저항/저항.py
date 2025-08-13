aomo=list()
for i in range(3):
      x=input()
      match x:
            case "black":
                 if i!=2:
                   aomo.append(0)
                 else:
                      print(((aomo[0]*10)+aomo[1])*1)   
            case "brown":
                if i!=2:
                   aomo.append(1)
                else:
                      print(((aomo[0]*10)+aomo[1])*10)  
            case "red":
                if i!=2:
                   aomo.append(2)
                else:
                      print(((aomo[0]*10)+aomo[1])*10**2)  
            case "orange":
                if i!=2:
                   aomo.append(3)
                else:
                      print(((aomo[0]*10)+aomo[1])*10**3)  
            case "yellow":
                if i!=2:
                   aomo.append(4)
                else:
                      print(((aomo[0]*10)+aomo[1])*10**4)  
            case "green": 
                if i!=2:
                   aomo.append(5)
                else:
                      print(((aomo[0]*10)+aomo[1])*10**5)  
            case "blue":
                 if i!=2:
                   aomo.append(6)
                 else:
                      print(((aomo[0]*10)+aomo[1])*10**6)  
            case "violet":      
                 if i!=2:
                   aomo.append(7)
                 else:
                      print(((aomo[0]*10)+aomo[1])*10**7)  
            case "grey":
                if i!=2:
                   aomo.append(8)
                else:
                      print(((aomo[0]*10)+aomo[1])*10**8)  
            case "white":      
               if i!=2:
                   aomo.append(9)
               else:
                      print(((aomo[0]*10)+aomo[1])*10**9)  
                                                   
                  
               
