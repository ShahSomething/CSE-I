from tkinter import *
from Class import *

Forms = []
for i in range(20):
    Forms.append(LoanApplication())

No = 1
for Form in Forms:
    Form.SetNo(No)
    No+=1
def Submit():
    for form in Forms:
        if form.Status=="N":
            form.SetAmount(AmountEntry.get())
            form.SetDepartment(DepartEntry.get())
            form.SetFatherName(FatherNameEntry.get())
            form.SetName(NameEntry.get())
            form.SetNationality(NationalityEntry.get())
            form.SetRegno(RegnoEntry.get())
            form.SetSemester(SemesterEntry.get())
            form.SetReason(ReasonEntry.get())
            Clear()
            with open('Applications.txt','a') as Application:
                Application.write("""
                
                -------------------------------------------------------------------------------------
                Application No: {}
                Name: {}
                Department: {}
                Semester: {}
                Registration No: {}
                Father Name: {}
                Nationality: {}
                Loan Amount: {}
                Reason For Loan: {}
                --------------------------------------------------------------------------------------
                
                
                """.format(form.ApplicationNo,form.name,form.department,form.semester,form.regno,
                           form.fathername,form.nationality,form.amount,form.reason))
            break

def Clear():
    NameEntry.delete(0,END)
    DepartEntry.delete(0, END)
    SemesterEntry.delete(0, END)
    FatherNameEntry.delete(0, END)
    RegnoEntry.delete(0, END)
    NationalityEntry.delete(0, END)
    ReasonEntry.delete(0, END)
    AmountEntry.delete(0, END)
    ReasonEntry.delete(0, END)


root = Tk()
# Labels
NameLabel = Label(root,text="Name: ")
DepartLabel = Label(root,text="Department: ")
SemesterLabel = Label(root,text="Semester: ")
RegnoLabel = Label(root,text="Registration No: ")
FatherNameLabel = Label(root,text="Father Name: ")
NationalityLabel = Label(root,text="Nationality: ")
AmountLabel = Label(root, text="Loan Amount: ")
ReasonLabel = Label(root, text="Why Do You Need this Loan: ")
EmptyLabel = Label(root,text=" ")


# Entries
NameEntry = Entry(root, text="Name")
DepartEntry = Entry(root, text="Department")
SemesterEntry = Entry(root, text="Semester")
RegnoEntry = Entry(root, text="Registration Number")
FatherNameEntry = Entry(root, text="Father Name")
NationalityEntry = Entry(root, text="Nationality")
AmountEntry = Entry(root, text="Amount")
ReasonEntry = Entry(root, text="Reason", width= 50)

# Buttons

SubmitButton = Button(root, text="Submit", command= Submit, bg="red",fg= "white")
ClearButton = Button(root, text="Clear", command= Clear, bg="red", fg= "white")

# Grid
NameLabel.grid(row=0,column=0)
NameEntry.grid(row=0,column=2, pady=10)
EmptyLabel.grid(row=1,column=0)
DepartLabel.grid(row=2,column=0)
DepartEntry.grid(row=2,column=2, pady=10)
EmptyLabel.grid(row=3,column=0)
SemesterLabel.grid(row=4,column=0)
SemesterEntry.grid(row=4,column=2, pady=10)
EmptyLabel.grid(row=5,column=0)
RegnoLabel.grid(row=6,column=0)
RegnoEntry.grid(row=6,column=2, pady=10)
EmptyLabel.grid(row=7,column=0)
FatherNameLabel.grid(row=8,column=0)
FatherNameEntry.grid(row=8,column=2, pady=10)
EmptyLabel.grid(row=9,column=0)
NationalityLabel.grid(row=10,column=0)
NationalityEntry.grid(row=10,column=2, pady=10)
EmptyLabel.grid(row=11,column=0)
AmountLabel.grid(row=12,column=0)
AmountEntry.grid(row=12,column=2, pady=10)
EmptyLabel.grid(row=13,column=0)
ReasonLabel.grid(row=14,column=0)
ReasonEntry.grid(row=14,column=2,columnspan= 15,padx=6, ipady=20, pady=10)
EmptyLabel.grid(row=15,column=0)
ClearButton.grid(row=16,column=2)
EmptyLabel.grid(row=17,column=0)
SubmitButton.grid(row=16,column=3)


root.mainloop()