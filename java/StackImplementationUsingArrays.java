class Stack {
	static final int MAX = 1000;
	int top;
	int arr[] = new int[MAX]; 
	
	Stack() {
		top = -1;
	}

	void push(int x) {
		if (top >= (MAX - 1)) {
			System.out.println("Stack Overflow");			
		}
		else {
			arr[++top] = x;
			System.out.println(x);
		}
	}

	int pop() {
		if (top < 0) {
			System.out.println("Stack Underflow");
			return 0;
		}
		else {
			int x = arr[top--];
			return x;
		}
	}

	int peek() {
		if (top < 0) {
			System.out.println("Stack Underflow");
			return 0;
		}
		else {
			int x = arr[top];
			return x;
		}
	}
}

class Main {
	public static void main(String args[]) {
		Stack st = new Stack();
		st.push(12);
		st.push(22);
		System.out.println(st.pop());
	}
}
