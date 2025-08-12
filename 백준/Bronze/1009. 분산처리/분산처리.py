count=int(input())
tow=[2,4,8,6]
thw=[3,9,7,1]
forh=[4,6]
seve=[7,9,3,1]
eight=[8,4,2,6]
nine=[9,1]
for _ in range(count):
      x,y=list(map(int,input().split()))
      match x%10:
         case 1:
            print(1)
            
         case 2:
            print(tow[(y-1)%4])
            
         case 3:
              print(thw[(y-1)%4])
              
         case 4:
            print(forh[(y-1)%2])
            
         case 7:
            print(seve[(y-1)%4])
            
         case 8:
              print(eight[(y-1)%4])
              
         case 9:
              print(nine[(y-1)%2])
              
         case 5:
            print("5")
         case 6:
              print("6")
         case 0:
              print(10)


