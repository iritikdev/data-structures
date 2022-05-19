#include<bits/stdc++.h>
using namespace std;

class Stack {
    int size = 5;
    int *items = new int[size];
    int top = 0;

    public:
    void push(int item) {
        if(top == size) cout << "StackOverFlowError" << endl;
        else items[top++] = item;
    }

    int pop() {
        if(top == 0) {
            cout << "StackUnderFlowError" << endl;
            return 0;
            cout <<"HI" << endl;
        }
            cout <<"2HI" << endl;
        return items[--top];
    }

    int length() {
        return top;
    }
   
    void print() {
        for(int i = 0; i < top; i++)
            cout << *(items + i) << " ";
    }

    int top() {
        return items[top-1];
    }

    bool isEmpty() {
        return top == 0;
    }
   
    bool isFull() {
        return top == size;
    }

};


int main(int argc, char const *argv[]) {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Size : " << s.length() << endl;
    return 0;
}
