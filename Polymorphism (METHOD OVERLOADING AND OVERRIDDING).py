class Country:
    
    name = ''
    def __init__(self, n) -> None:
        self.name = n

    def language(self):
        print('Language is Englishh')


class Bangladesh(Country):
    def __init__(self, n) -> None:
        super().__init__(n)
#method overriding
    def language(self):
        print('language is bangla')

class India(Country):
    def __init__(self, n) -> None:
        super().__init__(n)
#method overloading
    def language(self,a,b):
        print(f'language {a} and {b}')     


a = India('India')  

a.language('Hindi','Bangla')