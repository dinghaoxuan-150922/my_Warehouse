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
while True:
    cmds = input(">>>")
    if cmds == 'q':
        break
    if cmds == "read":
        m.read()
    if cmds == "add":
        string = input(">>>")
        m.read(string)
    if cmds == "all_del":
        m.all_del()