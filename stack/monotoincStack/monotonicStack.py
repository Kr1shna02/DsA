class Stack:
    def __init__(self):
        self.monotonicStack=[]
    
    def push(self,data):
        if len(self.monotonicStack)==0:
            self.monotonicStack.append(data)
            return None
        temp_stack=[]
        while True:
            if len(self.monotonicStack)==0:
                self.monotonicStack.append(data)
                break
            elif self.monotonicStack[-1]<=data: # This for increasing montonic stack, for decreasing change signe >=
                self.monotonicStack.append(data)
                break
            temp_stack.append(self.monotonicStack.pop())
        while len(temp_stack)!=0:
            self.monotonicStack.append(temp_stack[-1])
            temp_stack.pop()
    
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
    print("1.Push\n2.Pop\n3.Display\nEnter Choice: ")
    choice=int(input())
    if choice==1:
        data=input("Enter data: ")
        obj.push(data)
    elif choice==2:
        obj.pop()
    elif choice==3:
        obj.display()
    else:
        break

        

