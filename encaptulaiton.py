class Book:
    def __init__(self, text, font):
        self.__text = text
        self.__font = font

    def get_text(self):
        return self.__text

    def set_text(self, value):
        self.__text = value

    def get_font(self):
        return self.__font

    def set_font(self, value):
        self.__font = value


comic = Book('small', 'Arial')

comic.__text= 'Bigg'
print(comic.get_text())
comic.set_text('bigg')
print(comic.get_text())