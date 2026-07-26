#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
    Node* head;

public:
    DoublyLinkedList() { head = NULL; }

    void insertBegin(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->prev = NULL;
        temp->next = head;

        if (head != NULL)
            head->prev = temp;

        head = temp;
    }

    void insertEnd(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = NULL;

        if (head == NULL) {
            temp->prev = NULL;
            head = temp;
            return;
        }

        Node* t = head;
        while (t->next != NULL)
            t = t->next;

        t->next = temp;
        temp->prev = t;
    }

    void deleteBegin() {
        if (head == NULL) return;
        Node* temp = head;
        head = head->next;
        if (head != NULL) head->prev = NULL;
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
        while (t->next != NULL)
            t = t->next;

        t->prev->next = NULL;
        delete t;
    }

    void display() {
        Node* t = head;
        while (t != NULL) {
            cout << t->data << " ";
            t = t->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList d;
    d.insertBegin(20);
    d.insertBegin(10);
    d.insertEnd(30);
    d.insertEnd(40);

    cout << "List: ";
    d.display();

    d.deleteBegin();
    d.deleteEnd();

    cout << "After Deletion: ";
    d.display();
}
