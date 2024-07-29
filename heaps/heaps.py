class Heap:
    def __init__(self):
        self.arrayList = []

    def swap(self, first, second):
        self.arrayList[first], self.arrayList[second] = self.arrayList[second], self.arrayList[first]

    def parent(self, index):
        return (index - 1) // 2

    def leftchild(self, index):
        return 2 * index + 1

    def rightchild(self, index):
        return 2 * index + 2

    def upheap(self, index):
        if index == 0:
            return
        p = self.parent(index)
        if self.arrayList[p] < self.arrayList[index]:  # Condition for min heap / for max >
            self.swap(p, index)
            self.upheap(p)  # Recursive call with the new index

    def insert(self, value):
        self.arrayList.append(value)
        self.upheap(len(self.arrayList) - 1)  # Sorts the heap from bottom

    def downheap(self, index):
        m = index
        left = self.leftchild(index)
        right = self.rightchild(index)
        if left < len(self.arrayList) and self.arrayList[m] > self.arrayList[left]:
            m = left  
        if right < len(self.arrayList) and self.arrayList[m] > self.arrayList[right]:
            m = right
        if m != index:
            self.swap(m, index)
            self.downheap(m)

    def remove(self):
        if len(self.arrayList) == 0:
            return "Empty"
        value = self.arrayList[0]
        if len(self.arrayList) > 1:
            self.arrayList[0] = self.arrayList.pop()  # Move last element to root
        else:
            self.arrayList.pop()
        self.downheap(0)
        return value

    def display(self):
        print(self.arrayList)

    def headsort(self):
        elements=[]
        while (len(self.arrayList)!=0):
            elements.append(self.arrayList[0])
            self.arrayList.pop(0)
        return elements

if __name__ == "__main__":
    obj = Heap()
    obj.insert(2)
    obj.display()  
    obj.insert(1)
    obj.display()  
    print(obj.remove())   
    obj.display() 
    obj.insert(0)
    obj.display()
    obj.insert(3)
    obj.insert(5)
    print(obj.headsort())
