class Node: 
    def __init__(self, data):
        self.data = data
        self.next = None

def traverseAndPrint(head):
    currNode = head 
    while currNode:
        print(currNode.data, end=" -> ")
        currNode = currNode.next
    print("null")

node1 = Node(7)
node2 = Node(11)
node3 = Node(3)
node4 = Node(2)
node5 = Node(9)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5

traverseAndPrint(node1)

# output
# 7 -> 11 -> 3 -> 2 -> 9 -> null
