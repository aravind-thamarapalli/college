from abc import ABC,abstractmethod
class month(ABC):
    @abstractmethod
    def noday(self):
        pass
class jan(month):
    def noday(self):
        print("31 days")
class feb(month):
    def noday(self):
        print("28 days")
j=jan()
f=feb()
j.noday()
f.noday()