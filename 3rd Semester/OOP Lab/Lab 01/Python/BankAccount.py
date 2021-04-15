class BankAccount:
    def __init__(self):
        self.balance=1000
    def deposit(self,a):
        self.balance+=a
    def withdraw(self,a):
        if self.balance<=500:
            print("Insufficient Balance")
        else:
            self.balance-=a
    def CurrentBalance(self):
        print("Current Balance: "+str(self.balance))
acc=BankAccount()
acc.CurrentBalance()
acc.deposit(500)
acc.CurrentBalance()
acc.withdraw(500)
acc.CurrentBalance()
acc.withdraw(500)
acc.CurrentBalance()
acc.withdraw(500)
acc.CurrentBalance()