class Base:
    def input_base(self):
        self.ba=int(input("Enter base: "))
    def show_base(self):
        print("Base: {}".format(self.ba))
class Exponent:
    def input_exp(self):
        self.exp=int(input("Enter Exponent: "))
    def show_exp(self):
        print("Exponent: {}".format(self.exp))
class Power(Base,Exponent):
    def __init__(self):
        self.po=1
    def in1(self):
        self.input_base()
        self.input_exp()
    def show1(self):
        self.show_base()
        self.show_exp()
        for i in range(self.exp):
            self.po*=self.ba
        print("Power: {}".format(self.po))
p1 = Power()
p1.in1()
p1.show1()
