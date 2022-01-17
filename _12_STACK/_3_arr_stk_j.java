package _12_STACK;

import java.util.ArrayList;

// ?  Stack using normal arrays. Non-Dynamic.
class MyStack_Arr {
	int arr[];
	int top;
	int capacity;

	MyStack_Arr(int capacity) {
		this.capacity = capacity;
		arr = new int[capacity];
		top = -1;
	}

	void push(int item) {
		if (top == capacity - 1) {
			System.out.println("Stack Overflow");
			return;
		}
		arr[++top] = item;
	}

	int pop() {
		if (top == -1) {
			System.out.println("Stack Underflow");
			return -1;
		}
		return arr[top--];
	}

	int peek() {
		if (top == -1) {
			System.out.println("Stack Underflow");
			return -1;
		}
		return arr[top];
	}

	boolean isEmpty() {
		return (top == -1);
	}

	void display() {
		if (top == -1) {
			System.out.println("Stack is empty");
			return;
		}
		System.out.println("\nStack elements are: ");
		for (int i = top; i >= 0; i--) {
			System.out.println(arr[i]);
		}
		System.out.println();
	}
}

// ? Stack using ArrayList. Dynamic.
class MyStack_ArrList {
	ArrayList<Integer> arrList = new ArrayList<Integer>();

	void push(int item) {
		arrList.add(item);
	}

	int pop() {
		if (arrList.isEmpty()) {
			System.out.println("Stack Underflow");
			return -1;
		}
		// return arrList.remove(arrList.size() - 1);
		int p = arrList.get(arrList.size() - 1);
		arrList.remove(arrList.size() - 1);
		return p;
	}

	int peek() {
		if (arrList.isEmpty()) {
			System.out.println("Stack Underflow");
			return -1;
		}
		return arrList.get(arrList.size() - 1);
	}

	boolean isEmpty() {
		return arrList.isEmpty();
	}

	void display() {
		if (arrList.isEmpty()) {
			System.out.println("Stack is empty");
			return;
		}
		System.out.println("\nStack elements are: ");
		for (int i = arrList.size() - 1; i >= 0; i--) {
			System.out.println(arrList.get(i));
		}
		System.out.println();
	}
}

public class _3_arr_stk_j {
	public static void main(String[] args) {

		MyStack_Arr arr_stack = new MyStack_Arr(5);
		arr_stack.push(10);
		arr_stack.push(20);
		arr_stack.push(30);
		arr_stack.push(40);
		arr_stack.push(50);

		arr_stack.display();

		arr_stack.pop();
		arr_stack.pop();

		arr_stack.display();

		arr_stack.push(60);
		arr_stack.push(70);

		arr_stack.display();

		arr_stack.pop();
		arr_stack.pop();

		arr_stack.display();

		arr_stack.pop();
		arr_stack.pop();
		arr_stack.pop();

		arr_stack.display();

		MyStack_ArrList stk = new MyStack_ArrList();

		stk.push(10);
		stk.push(20);
		stk.push(30);
		stk.push(40);
		stk.push(50);

		stk.display();

		System.out.println("Popped element is: " + stk.pop());
		System.out.println("Popped element is: " + stk.pop());
		System.out.println("Popped element is: " + stk.pop());

		stk.display();

		stk.push(60);
		stk.push(70);

		stk.display();

		System.out.println("Popped element is: " + stk.pop());
		System.out.println("Top element is: " + stk.peek());
		System.out.println("Popped element is: " + stk.pop());
		System.out.println("Top element is: " + stk.peek());

	}
}
