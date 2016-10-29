fila=0
columna=0
a=0
b=0
c=0
import random
class Karla:
    Janett = [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]] 
    hijos =[[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]] 
    def amor(self):#creacion de numeros aleatoreos para pc necesita una condcion para no repetirse#
        Axel = Karla()
        z=0
        while z<=4:
            b=random.randint(0, 3)
            c=random.randint(0, 3)
            Axel.hijos[b][c]= 0
            z=z+1
        print "la matriz enemiga es", Axel.hijos[0], Axel.hijos[1], Axel.hijos[2], Axel.hijos[0]
    def juntos (self):#eleccion de numeros por el jugador#
        i=1
        while i<=4:
            print "considere una matriz de 4x4, en que fila desde 0 A 3 quieres que este tu ficha no", i
            a=input()
            if a<4:
                fila = a
            else:
                print "numero no valido" #tengo duda sobre como pedir nuevamente el valor#
                
            print "considere una matriz de 4x4, en que comlumna  0 A 3 quieres que este tu ficha no", i   
            a=input()
            if a<4:
                columna = a
            else:
                print "numero no valido"#tengo duda sobre como pedir nuevamente el valor#
                
            Axel.Janett[fila][columna]=0
            i=i+1
            print" tu matriz es", Axel.Janett[0],  Axel.Janett[1],  Axel.Janett[2],  Axel.Janett[3]      
Axel = Karla()##
Axel.amor()
Axel.juntos()
