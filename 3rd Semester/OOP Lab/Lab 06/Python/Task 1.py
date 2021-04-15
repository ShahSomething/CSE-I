class First:
    def in1(self):
        self.f=input("Enter f: ")

class Second(First):
    def in1(self):
        self.f= input("Enter f: ")
        self.s=input("Enter s: ")

class Third(Second):
    def in1(self):
        self.f=input("Enter f: ")
        self.s = input("Enter s: ")
        self.t=input("Enter t: ")
    def max(self):
        if (self.f>self.s and self.f>self.t):
            print(self.f+" is max ")
        elif (self.s>self.f and self.s>self.t):
            print(self.s+" is max ")
        elif (self.t>self.f and self.t>self.s):
            print(self.t+" is max ")
    def show(self):
        print("f: {}".format(self.f))
        print("s: {}".format(self.s))
        print("t: {}".format(self.t))

t1 = Third()
t1.in1()
t1.show()
t1.max()