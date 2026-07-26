#include <iostream>
using namespace std;

class Queue {
    int arr[5];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {
        if (rear == 4) {
            cout << "Queue Overflow\n";
        } else {
            if (front == -1) front = 0;
            arr[++rear] = x;
            cout << x << " added to queue\n";
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
        } else {
            cout << arr[front++] << " removed from queue\n";
        }
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty\n";
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
}
