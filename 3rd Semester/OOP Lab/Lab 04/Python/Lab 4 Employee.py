import copy
class employee:
    def __init__(self,n="",d="",s=0,p=0):
        self.name=n
        self.department=d
        self.salary=s
        self.period=p
    def datain(self):
        self.name=input()
        self.department=input()
        self.salary=input()
        self.period=input()
    def show(self):
        print("Name: " + self.name)
        print("Department: " + self.department)
        print("Salary: " + str(self.salary))
        print("Period: " + str(self.period))

e1= employee()
print("Input Employee 1 data: ")
e1.datain()
print("Employee 1: ")
e1.show()
e2=copy.copy(e1)
print("Employee 2: ")
e2.show()
e3=copy.deepcopy(e1)
print("Employee 3: ")
e3.show()