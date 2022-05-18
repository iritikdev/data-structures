#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        Node *prev;
        int data;
        Node *next;

    Node(int item) {   
        prev = NULL;
        data = item;
        next = NULL;
    }
};

class DoublyLinkedList {
    public:
    Node *head, *tail;
    int size;

    DoublyLinkedList() {
        head = NULL;
        size = 0;
        tail = NULL;
    }

    void addFirst(int item) {
        Node *node = new Node(item);

        if(head == NULL) head = tail = node;
        else {
            node->next = head;
            head->prev = node;
            head = node;
        }
        size++;
    }

    void addLast(int item) {
        Node *node = new Node(item);

        if(head == NULL) head = tail = node;
        else {
            tail ->next = node;
            node->prev = tail;
            tail = node;
        }
        size++;
    }

    void addMiddle(int item, int position) {
        Node *node = new Node(item);

        if(head == NULL) head = tail = node;
        else {
            Node *current = head;
            for (size_t i = 0; i < position; i++) {
                if(i == position-1) break;
                current = current->next;
            }
            Node *second = current->next;
            current->next = node;
            node->next = second;
            second->prev = node;
            node -> prev = current;
        }
        size++;
    }
    
    void removeFirst() {
        if(head == NULL) {
            cout << "list is empty." << endl;
            exit(0);
        }
        Node *second = head->next;
        head->next = NULL;
        second->prev = NULL;
        head = second;
    }
    void reverse() {
        Node *current = tail;

        while (current != NULL) {
            cout << current->data << " ";
            current = current->prev;
        }
        
        cout << endl;
    }
    
    void print() {
        Node *current = head;
        while(current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

};


int main(int argc, char const *argv[]) {
    DoublyLinkedList list;
    
    list.addLast(10);
    list.addLast(15);
    list.addLast(20);

    list.removeFirst();
    list.print();
    list.reverse();
    
    return 0;
}
