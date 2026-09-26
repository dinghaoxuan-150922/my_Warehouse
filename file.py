class File:
    def __init__(self,name):
        self.name = name

    def add(self,string):
        with open(self.name,'a') as f:
            f.write(string)

    def all_del(self):
        with open(self.name,'w') as f:
            f.write('')

    def read(self):
        with open(self.name,'r') as f:
            read = f.read()
            print(read)


m = File("e.txt")
m.read()