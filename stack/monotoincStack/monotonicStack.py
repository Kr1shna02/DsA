class Stack:
    def __init__(self):
        self.monotonicStack=[]
    
    def push(self,data):
        while self.monotonicStack and self.monotonicStack[-1]>data: # For decreasing monotonic covert sign to <
            self.monotonicStack.pop()
        self.monotonicStack.append(data)
    
    def pop(self):
        if len(self.monotonicStack)==0:
            print("Empty")
            return None        
        self.monotonicStack.pop()
    
    def display(self):
        if len(self.monotonicStack)==0:
            print("Empty")
            return None
        print(self.monotonicStack)

obj=Stack()

while(1):
    print("1.Push\n2.Pop\n3.Display\n4.Exit\nEnter Choice: ")
    choice=int(input())
    if choice==1:
        data=input("Enter data: ")
        obj.push(data)
    elif choice==2:
        obj.pop()
    elif choice==3:
        obj.display()
    elif choice==4:
        break
    else:
        print("Invalid Input")

        
