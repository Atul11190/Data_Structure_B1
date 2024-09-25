#include <iostream>
using namespace std;

class Stack {
private:
    int maxSize;
    int* stack;
    int top;

public:
    // Initialize Stack
    Stack(int size) {
        maxSize = size;
        stack = new int[maxSize];
        top = -1;  // Stack is initially empty
    }

    ~Stack() {
        delete[] stack;
    }

    // Push Operation
    void push(int data) {
        if (top == maxSize - 1) {
            cout << "Stack Overflow" << endl;  // Stack is full
        } else {
            top++;
            stack[top] = data;  // Insert the element at top position
        }
    }

    // Pop Operation
    int pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;  // Stack is empty
            return -1;
        } else {
            int data = stack[top];
            top--;
            return data;  // Remove and return the top element
        }
    }

    // Peek Operation
    int peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;  // Stack is empty
            return -1;
        } else {
            return stack[top];  // Return the top element without removing it
        }
    }

    // isEmpty Operation
    bool isEmpty() {
        return top == -1;  // Return True if stack is empty, otherwise False
    }
};

int main() {
    Stack stack(5);  // Create a stack with a maximum size of 5
    stack.push(10);
    stack.push(20);
    cout << stack.pop() << endl;  // Output: 20
    cout << stack.peek() << endl;  // Output: 10
    cout << (stack.isEmpty() ? "True" : "False") << endl;  // Output: False
    return 0;
}
