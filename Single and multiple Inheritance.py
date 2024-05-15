class Engine():
    EngineName = ''

    def __init__(self,en) -> None:
        self.EngineName = en

    def engineCompany():
        print('Chinese COmpany')

class Window():
    bulletproof = ''
    def __init__(self,bp) -> None:
        self.bulletproof = bp


#multiple Inheritance
class Car(Engine , Window):
    model = ''
    def __init__(self, model,en,bp) -> None:
        self.model = model
        Engine.__init__(self,en)
        Window.__init__(self,bp)

myCar = Car('BMW', 'Castor' , 'YES')

print(myCar.EngineName)

#Single Inheritance

class Bike(Engine):
    model = ''
    def __init__(self, model,en) -> None:
        self.model = model
        Engine.__init__(self,en)

myBike = Bike('Pulser', 'Chinese')

print(myBike.model)
        

