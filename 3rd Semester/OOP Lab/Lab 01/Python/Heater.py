class Heater:
    def __init__(self):
        self.temperature = 15
    def warmer(self):
        self.temperature += 5
    def cooler(self):
        self.temperature -= 5
    def show(self):
        return self.temperature
h1=Heater()
h2=Heater()
print("For Heater 1 ")
print("Temperature: ")
print(h1.show())
h1.warmer()
print("Warmer Temperature: ")
print(h1.show())
h1.cooler()
print("Cooler Temperature: ")
print(h1.show())
print("For Heater 2 ")
print("Temperature: ")
print(h2.show())
h2.warmer()
h2.warmer()
print("Warmer Temperature: ")
print(h2.show())
h2.cooler()
print("Cooler Temperature: ")
print(h2.show())
