#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int item)
    {
        data = item;
        next = NULL;
    }
};

class SinglyLinkedList
{
public:
    Node *head;
    Node *tail;
    int size;

    SinglyLinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void addFirst(int item)
    {
        // create a new node
        Node *node = new Node(item);

        if (head == NULL) head = tail = node;
        else {
            node->next = head;
            head = node;
        }
        size++;
    }

    void addLast(int item)
    {
        Node *node = new Node(item);

        if (head == NULL) {
            head = node;
            tail = node;
        }
        else {
            tail->next = node;
            tail = node;
        }
        size++;
    }

    int length() {
        return size;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void print()
    {
        Node *current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
    }

    void insert(int pos, int item) {
        Node *node = new Node(item);
        if(!node) { 
            cout << "Memory full" << endl;
            exit(0);
        }

        if(!(pos >= 0 && pos < size)) {
            cout << "Invalid Index" << endl;
            exit(0);
        }

        Node *current = head;
        Node *prev = NULL;

        if(pos == 0) addFirst(item);
           
        else {
            for (size_t i = 0; i < pos; i++) {
                if(i == pos) break;
                prev = current;
                current = current->next;
            }
            prev->next = node;
            node->next = current;
            size++;
        }
        
    }

    void removeFirst() {
        if(head == NULL) {
            cout << "list is empty." << endl;
            exit(0);
        }
        Node *second = head->next;
        head->next = NULL;
        head = second; 

        size--;
    }
    
    void removeLast() {
        if(isEmpty()) {
            cout << "list is empty" << endl;
            exit(0);
        }
        if(head == tail) head = tail = NULL;
        
        Node *current = head;
        while(current != NULL) {
            if(current->next == tail) break;
            current = current->next;
        }
        current->next = NULL;
        tail = current;
        size--;
    }
    

    
    // Node* remove() {

    // }

    // void deleteList() {

    // }

};

int main()
{
    SinglyLinkedList list;
    list.addLast(10);
    list.addLast(20);
    list.addLast(30);
    
    list.insert(1,5);
    cout << "Size of List: " << list.length() << endl;
    list.print();

    string result = list.isEmpty() ? "true" : "false";
    cout << "\nis empty:  " << result << endl;
    return 0;
}