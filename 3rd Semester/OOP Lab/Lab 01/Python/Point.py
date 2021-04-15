class Point:
    def __init__(self):
        self.x=0
        self.y=0
    def __init__(self,a,b):
        self.x=a
        self.y=b
    def Setx(self,a):
        self.x=a
    def Sety(self,a):
        self.y=a
    def Getx(self):
        return self.x
    def Gety(self):
        return self.y
    def Show(self):
        print("( "+str(self.x)+" , "+str(self.y)+" )")
P1=Point(0,0)
P2=Point(2,4)
P1.Setx(3)
P1.Sety(8)
print("Point 1: "+str(P1.Getx())+" "+str(P1.Gety()))
print("Point 2: ")
P2.Show()