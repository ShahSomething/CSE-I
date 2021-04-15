class Point:
    def __init__(self,a=0,b=0):
        self.x=a
        self.y=b
    def Setx(self,a):
        self.x=a
    def Sety(self,b):
        self.y=b
    def Getx(self):
        return self.x
    def Gety(self):
        return self.y
    def Show(self):
        print("Point: ( {} , {} )".format(self.x,self.y))

class Circle(Point):
    def __init__(self,r=0,a=0,b=0):
        self.radius=r
        self.x=a
        self.y=b
    def __init__(self,r,p):
        self.radius=r
        self.x=p.Getx()
        self.y=p.Gety()
    def SetR(self,r):
        self.radius=r
    def GetR(self):
        return self.radius
    def Circumference(self):
        return 2*3.14*self.radius
class Cylinder(Point):
    def __init__(self,h,C):
        self.height=h
        self.radius=C.GetR()
        self.x=C.Getx()
        self.y=C.Gety()
    def Area(self):
        return 2*3.14*self.radius*(self.radius+self.height)
    def Vol(self):
        return 2*3.14*self.radius * (self.radius * self.height)
P = Point(2,3)
C = Circle(4,P)
C.Show()
print("Radius of Circle: {}".format(C.GetR()))
print("Circumference of Circle: {}".format(C.Circumference()))
Cy = Cylinder(6.4,C)
print("Area of Cylinder: {}".format(Cy.Area()))
print("Volume of Cylinder: {}".format(Cy.Vol()))