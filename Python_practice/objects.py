# defining a class/ object

class Student():

    def __init__(self, name, id):
        self.name = name
        self.id = id

    def changeID(self, id):
        self.id = id

    def print(self):
        print(f"{self.name} - {self.id}")

jane = Student("Jane", 10)
jane.print()

# changing Jane's ID
jane.changeID(11)
jane.print()