class LoanApplication:
    def __init__(self):
        self.name = " "
        self.department = " "
        self.semester = " "
        self.fathername = " "
        self.regno = " "
        self.amount = " "
        self.reason = " "
        self.nationality = " "
        self.Status = "N"

    def SetName(self,n):
        self.name=n
    def SetDepartment(self,n):
        self.department=n
    def SetSemester(self,n):
        self.semester=n
    def SetFatherName(self,n):
        self.fathername=n
    def SetRegno(self,n):
        self.regno=n
    def SetAmount(self,n):
        self.amount=n
    def SetReason(self,n):
        self.reason=n
    def SetNationality(self,n):
        self.nationality=n
    def SetStatus(self):
        self.Status="Y"
    def SetNo(self,n):
        self.ApplicationNo = n