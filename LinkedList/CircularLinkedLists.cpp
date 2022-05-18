#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
    Node(int item) {
        data = item;
        next = NULL;
    }
};

class CircularLinkedList {
    public:
        Node *head, *tail;
        int size;
    CircularLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void addLast(int item) {
        Node *node = new Node(item);
        if(head == NULL) {
            head = tail = node;
            tail->next = head;
        }else {
            tail->next = node;
            tail = node;
            tail->next = head;
        }
        size++;
    }

    void print() {
        Node *current = head;
        do {
            cout << current->data << " ";
            current = current->next;
        }while(current != head);
    }

    
};

int main(int argc, char const *argv[]) {
    
    CircularLinkedList list;
    list.addLast(10);
    list.addLast(20);
    list.addLast(30);

    list.print();
    return 0;
}
