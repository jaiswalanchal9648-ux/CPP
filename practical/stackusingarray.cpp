#include <iostream>
using namespace std;

class Stack {
    int arr[5];   // stack size 5
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == 4) {
            cout << "Stack Overflow\n";
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
        } else {
            cout << arr[top--] << " popped from stack\n";
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is Empty\n";
        } else {
            cout << "Top element is: " << arr[top] << "\n";
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    s.display();
}
