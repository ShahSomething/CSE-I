class RationalNumber:
    def __init__(self,a=0,b=0):
        if b<=0:
            print("Denominator can not be 0 or Negative.")
        else:
            self.num = a
            self.den = b
        n = self.num
        d = self.den
        while n!=d:
            if n>d:
                n-=d
            else:
                d-=n
        self.num/=n
        self.den/=n
    def ShowRN(self):
        print("Number: {}/{}".format(self.num,self.den))
    def __add__(self, other):
        temp = RationalNumber(1,1)
        temp.num = (self.num * other.den) + (self.den * other.num)
        temp.den = self.den * other.den
        return temp
    def __sub__(self, other):
        temp = RationalNumber(1,1)
        temp.num = (self.num * other.den) - (self.den * other.num)
        temp.den = self.den * other.den
        return temp
    def __mul__(self, other):
        temp = RationalNumber(1,1)
        temp.num = self.num * other.num
        temp.den = self.den * other.den
        return temp
    def __div__(self,other):
        temp = RationalNumber(1,1)
        temp.num = self.num * other.den
        temp.den = self.den * other.num
        return temp
    def __gt__(self, other):
        if self.num / self.den > other.num / other.den:
            return True
        else:
            return False
    def __lt__(self, other):
        if self.num / self.den < other.num / other.den:
            return True
        else:
            return False
    def __ge__(self, other):
        if self.num / self.den >= other.num / other.den:
            return True
        else:
            return False
    def __le__(self, other):
        if self.num / self.den <= other.num / other.den:
            return True
        else:
            return False
    def __eq__(self, other):
        if self.num / self.den == other.num / other.den:
            return True
        else:
            return False
    def __ne__(self, other):
        if self.num / self.den != other.num / other.den:
            return True
        else:
            return False

r1 = RationalNumber(1,1)
r2 = RationalNumber(1,3)
print("R1: ")
r1.ShowRN()
print("R2: ")
r2.ShowRN()
r3 = RationalNumber(1,1)
r3 = r1 + r2
print("After adding r1 to r2 and storing in r3.")
print("R3: ")
r3.ShowRN()
r3 = r1 - r2
print("After subtracting r2 from r1 and storing in r3.")
print("R3: ")
r3.ShowRN()
r3 = r1 * r2
print("After multiplying r1 to r2 and storing in r3.")
print("R3: ")
r3.ShowRN()
if r1 > r2:
    print("R1 is greater than R2.")
if r1 < r2:
    print("R1 is less than R2.")
if r1 >= r2:
    print("R1 is greater than or equal to R2.")
if r1 <= r2:
    print("R1 is less than or equal to R2.")
if r1 == r2:
    print("R1 is equal to R2.")
if r1 != r2:
    print("R1 is not equal to R2.")
