A,B = map(int, input().split())
f = False

for i in range(A,B):
    n = i
    l = True

    while n > 0:
        d = n % 10
        if d != 4 and d != 7:
            l = False
            break
        n = n//10
    
    if l :
        print(i,end=" ")
        f = True
        
if not f:
    print("-1\n")