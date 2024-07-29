class heap:
    def __init__(self):
        self.arrayList=[]

    def swap(self,first,second):
        self.arrayList[first],self.arrayList[second]=self.arrayList[second],self.arrayList[first]

    def parent(self,index):
        return (index)//2

    def leftchild(self,index):
        return 2*index+1
    
    def rightchild(self,index):
        return 2*index+2

    def insert(self,value):
        self.arrayList.append(value)
        upheap(len(self.arrayList)-1) #sorts the heap from bottom

    def upheap(self,index):
        if index==0:
            return
        p=self.parent(index)
        if self.arrayList[p]>self.arrayList[index]: # condition for min heap
            self.swap(p,index)      
            upheap(self,p)

    def display(self):
        print(self.arrayList)   

obj=heap()
obj.insert(2)
obj.display()

        