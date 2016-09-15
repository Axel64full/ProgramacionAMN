import math
def f(x):
    return(x*math.exp(x)-5)
a=1.2
b=1.4
tol=0.0002
while True:
        c=(a+b)/2
        if f(a)*f(c)< 0:
            b=c
        else:
            a=c
        print c
        
        if  f(c) ==0:
                break