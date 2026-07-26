#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    Node* head;

public:
    LinkedList() { head = NULL; }

    void insertBegin(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = head;
        head = temp;
    }

    void insertEnd(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = NULL;
        if (head == NULL) {
            head = temp;
            return;
        }
        Node* t = head;
        while (t->next != NULL)
            t = t->next;
        t->next = temp;
    }

    void deleteBegin() {
        if (head == NULL) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteEnd() {
        if (head == NULL) return;
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        Node* t = head;
        while (t->next->next != NULL)
            t = t->next;
        delete t->next;
        t->next = NULL;
    }

    int search(int key) {
        Node* t = head;
        int pos = 1;
        while (t != NULL) {
            if (t->data == key)
                return pos;
            t = t->next;
            pos++;
        }
        return -1;
    }

    void display() {
        Node* t = head;
        while (t != NULL) {
            cout << t->data << " -> ";
            t = t->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList l;
    l.insertBegin(30);
    l.insertBegin(20);
    l.insertBegin(10);
    l.insertEnd(40);
    l.insertEnd(50);
    l.display();

    cout << "Position of 40 is: " << l.search(40) << endl;
    l.deleteBegin();
    l.deleteEnd();
    l.display();
}
