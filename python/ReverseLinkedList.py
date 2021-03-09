class Node:
    def __init__(self, data=None):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def add(self, newdata):
        NewNode = Node(newdata)
        if self.head is None:
            self.head = NewNode
            return
        temp = self.head
        while(temp.next):
            temp = temp.next
        temp.next=NewNode

    def print(self):
        temp = self.head
        while temp is not None:
            print (temp.data)
            temp = temp.next
            
    def reverse(self):
        prev = None
        nxt = None
        temp = self.head
        while(temp is not None):
            nxt = temp.next
            temp.next = prev
            prev = temp
            temp = nxt
        self.head = prev


ll = LinkedList()
ll.head = Node("12")
ll.add("1")
ll.add("22")
ll.add("10")
ll.reverse()
ll.print()
