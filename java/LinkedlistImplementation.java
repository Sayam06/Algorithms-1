public class LinkedlistImplementation {
	
	public class Node{
		int data;
		Node next;
		
		Node(int data){
			this.data = data;
			next = null;
		}
	}
	
	Node head;
	
	boolean isEmpty() {
		return head == null;
	}
	
	void add(int data) {
		Node toAdd = new Node(data);
		
		if(isEmpty()) {
			head = toAdd;
			return;
		}
		
		Node temp = head;
		while(temp.next != null) {
			temp = temp.next;
		}
		temp.next = toAdd;
	}
	
	void printAll() {
        if(isEmpty()){
            System.out.println("Empty List");
            return;
        }
		Node temp = head;
		while(temp != null) {
			System.out.println(temp.data);
			temp = temp.next;
		}
	}

    void search(int data) {
		if(isEmpty()) {
			System.out.println("Empty List");
			return;
		}
		
		Node temp = head;
		while(temp != null) {
			if(temp.data == data) {
				System.out.println("Found");
				return;
			}
			temp = temp.next;
		}
		
		System.out.println("Not Found");
    }
    
	public static void main(String[] args) {
		LinkedlistImplementation ll = new LinkedlistImplementation();
		
		ll.add(12);
		ll.add(1);
		ll.add(22);
		ll.add(10);
		
        ll.printAll();
        
        ll.search(22);
	}

}
