class Car:

    name = ''
    model = ''

    def __init__(self,name,model):
        self.name = name
        self.model = model
        print('Welcome to your new Car. You can use startengine method() ,stopengine(),direction(),CheckTopspeed() , carinfo() ')

    def startengine(self):

        print("ENGINE STARTED....")

    def stopengine(self):
        print("Enginee turnedd offf")

    def checktopSpeed(self):
        return 240
    
    def direction(self):

        a = input('Please Enter where you want to go : ')

        print(f'It will take 30 mins to reach {a}')
    def carinfo(self):
        print(f'Name : {self.name} {self.model}')


myCar = Car('Audi' , 'A4')

myCar.carinfo()
        