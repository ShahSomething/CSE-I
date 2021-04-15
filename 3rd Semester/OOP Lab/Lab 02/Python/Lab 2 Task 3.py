SIZE=50
import random

class IntegerSet:

    def __init__(self):
        Array = []
        self.Array=[0 for i in range(SIZE)]
    def NewIntegerSet(self,A):
        for i in range(SIZE):
            c=0
            for j in range(SIZE):
                if i==A[j]:
                    c+=1
                    self.Array[i]=1
                    break
            if c==0:
                self.Array[i]=0
    def SetPrint(self):
        for i in range(SIZE):
            if self.Array[i]==1:
                print(i)
    def InsertElement(self,k):
        self.Array[k]=1
    def DeleteElement(self,m):
        self.Array[m]=0
    def UnionOfIntegerSet(self,A):
        B=IntegerSet()
        for i in range(SIZE):
            if (A.Array[i] or self.Array[i]):
                B.Array[i]=1
            else:
                B.Array[i]=0
        return B
    def IntersectionOfIntegerSet(self,A):
        B=IntegerSet()
        for i in range(SIZE):
            if (not A.Array[i] or not self.Array[i]):
                B.Array[i]=0
            else:
                B.Array[i]=1
        return B
    def IsEqualTo(self,A):
        c=0
        for i in range(SIZE):
            if A.Array[i]==self.Array[i]:
                c+=1
        if c==SIZE:
            print("Integer Sets are Equal")
        else:
            print("Integer Sets are Not Equal")

x=[random.randrange(0,50) for i in range(SIZE)]
y=[random.randrange(0,50) for i in range(SIZE)]
i1=IntegerSet()
i2=IntegerSet()
i3=IntegerSet()
i1.NewIntegerSet(x)
i1.SetPrint()
i2.NewIntegerSet(y)
i2.SetPrint()
i1.InsertElement(33)
i1.DeleteElement(44)
i3=i1.UnionOfIntegerSet(i2)
i3.SetPrint()
i3=i1.IntersectionOfIntegerSet(i2)
i3.SetPrint()
i1.IsEqualTo(i2)

