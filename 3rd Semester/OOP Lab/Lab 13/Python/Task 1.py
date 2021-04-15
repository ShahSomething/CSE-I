class Distance:
    def __init__(self,f=0,i=0):
        self.feet=f
        self.inch=i
        if self.inch>12:
            self.feet+=1
            self.inch-=12
    def ShowDistance(self):
        print("Distance: {} feet {} inch(es).".format(self.feet,self.inch))
    def __add__(self, other):
        temp=Distance()
        temp.inch=self.inch+other.inch
        temp.feet=self.feet+other.feet
        if temp.inch>12:
            temp.feet+=1
            temp.inch-=12
        return temp
    def __iadd__(self, other):
        self.inch+=other.inch
        self.feet+=other.feet
        if self.inch>12:
            self.feet+=1
            self.inch-=12
        return self
    def __gt__(self, other):
        if self.feet>other.feet:
            return True
        elif self.feet==other.feet and self.inch>other.inch:
            return True
        else:
            return False
    def __lt__(self, other):
        if self.feet<other.feet:
            return True
        elif self.feet==other.feet and self.inch<other.inch:
            return True
        else:
            return False
    def __ge__(self, other):
        if self.feet>other.feet or (self.feet==other.feet and self.inch==other.inch):
            return True
        elif self.feet==other.feet and self.inch>other.inch:
            return True
        else:
            return False
    def __le__(self, other):
        if self.feet<other.feet or (self.feet==other.feet and self.inch==other.inch):
            return True
        elif self.feet==other.feet and self.inch<other.inch:
            return True
        else:
            return False
    def __eq__(self, other):
        if self.feet==other.feet and self.inch==other.inch:
            return True
        else:
            return False
    def __ne__(self, other):
        if self.feet!=other.feet or self.inch!=other.inch:
            return True
        else:
            return False

d1 = Distance(3,12)
d2 = Distance(12,0)
print("For D1: ")
d1.ShowDistance()
print("For D2: ")
d2.ShowDistance()
d3 = Distance()
d3 = d1+d2
print("For D3: ")
d3.ShowDistance()
d3+=d1
print("For D3: ")
d3.ShowDistance()
if d1>d2:
    print("D1 is greater than D2.")
if d1<d2:
    print("D1 is less than D2.")
if d1>=d2:
    print("D1 is greater than or equal to D2.")
if d1<=d2:
    print("D1 is less than or equal to D2.")
if d1==d2:
    print("D1 is equal to D2.")
if d1!=d2:
    print("D1 is not equal to D2.")
