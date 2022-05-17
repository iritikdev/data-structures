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
    // 1. Append a node to the list...
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
};

int main()
{
    SinglyLinkedList list;
    list.addLast(10);
    list.addLast(20);
    list.addLast(30);
    list.addFirst(5);

    cout << "Size: " << list.size << endl;
    list.print();

    string result = list.isEmpty() ? "\ntrue" : "\nfalse";
    cout << result << endl;
    return 0;
}