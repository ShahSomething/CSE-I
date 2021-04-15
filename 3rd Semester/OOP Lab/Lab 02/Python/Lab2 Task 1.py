class Complex:
    def __init__(self):
        self.re=0
        self.im=0
    def __init__(self,a,b):
        self.re=a
        self.im=b
    def display(self):
        print("Complex Number: "+str(self.re)+" +i"+str(self.im))
    def sumcom(self,C1,C2):
        self.re=C1.re+C2.re
        self.im=C1.im+C2.im
    def negcom(self):
        temp=Complex(0,0)
        temp.re=-self.re
        temp.im=-self.im
        return temp
    def input(self):
        self.re=float(input())
        self.im=float(input())
    def subcom(self,C1,C2):
        self.re= C1.re-C2.re
        self.im= C1.im-C2.im
    def mul(self,C1,C2):
        self.re=(C1.re*C2.re)-(C1.im*C2.im)
        self.im=(C1.re*C2.im)+(C1.im*C2.re)

C1=Complex(2,3)
C2=Complex(4,3.5)
C=Complex(0,0)
C.sumcom(C1,C2)
C1.display()
C2.display()
C.display()
C=C1.negcom()
C.display()
C1.input()
print("Subtraction: ")
C.subcom(C1,C2)
C.display()
print("Multiplication: ")
C.mul(C1,C2)
C.display()