
class Complex:
    def __init__(self):
        self.re=0
        self.im=0
    def __init__(self,a,b):
        self.re=a
        self.im=b
    def display(self):
        print("Complex Number: "+str(self.re)+" +i"+str(self.im))
    def sumcom(self,C1):
        C=Complex(0,0)
        C.re=self.re+C1.re
        C.im=self.im+C1.im
        return C
    def negcom(self):
        temp=Complex(0,0)
        temp.re=-(self.re)
        temp.im=-(self.im)
        return temp
    def input(self):
        self.re=float(input())
        self.im=float(input())
    def subcom(self,C1):
        C=Complex(0,0)
        C.re=(C1.re)-(self.re)
        C.im=(C1.im)-(self.im)
        return C
    def mul(self,C1):
        C=Complex(0,0)
        C.re=(C1.re*self.re)-(C1.im*self.im)
        C.im=(C1.re*self.im)+(C1.im*self.re)
        return C

C1=Complex(2,3)
C2=Complex(4,3.5)
C=Complex(0,0)
C2=C.sumcom(C1)
C1.display()
C2.display()
C=C1.negcom()
C.display()
C1.input()
print("Subtraction: ")
C2=C.subcom(C1)
C2.display()
print("Multiplication: ")
C2=C.mul(C1)
C2.display()