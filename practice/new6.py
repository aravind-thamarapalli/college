from abc import ABC, abstractmethod

class opps(ABC):
    @abstractmethod
    def elsing(self):
        pass

class simple(opps):
    def elsing(self):
        super().elsing()
        print("hell")

x = simple()
x.elsing()