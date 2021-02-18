from sys import maxsize


def createStack():
	stack = []
	return stack


def push(stack, item):
	stack.append(item)
	print(item)
	

def pop(stack):
	if (len(stack) == 0):
		return str(-maxsize -1)
	
	return stack.pop()


def peek(stack):
	if (len(stack) == 0):
		return str(-maxsize -1) 
	return stack[len(stack) - 1]


stack = createStack()
push(stack, str(12))
push(stack, str(22))
print(pop(stack))
