#include<bits/stdc++.h>
using namespace std;

class Array {
    int *items;
    int count = 0;

    public: 
    int size = 0;

    Array(int length) {
        items = new int[length];
        size = length;    
    }

    void insert(int item) {
        if(size == count) {
            int *newItems = new int[count * 2];
            for (size_t i = 0; i < count; i++)
                newItems[i] = items[i];
            items = newItems;
        }
        items[count++] = item;
    }

    void removeAt(int index) {
        try {
            if(index < 0 || index >= count) throw "indexOutOfBoundError";
        } catch(const char* error) {
            cout << error << endl;
            exit(0);
        }
        for(int i = index; i < count; i++) items[i] = items[i+1];
        count--;
        
    }

    int length() {
        return count;
    }

    int indexOf(int item) {
        for(int i = 0; i < count; i++) 
            if(items[i] == item) return i;
        return -1;
    }

    void print() {
        for (size_t i = 0; i < count; i++)
            cout << items[i] << " ";
    }

    bool isEmpty() {
        return count == 0;
    }

    int max() {
        int max = items[0];
        for (size_t i = 0; i < count; i++)
            if(max < items[i]) max = items[i];
        return max;
    }

    int at(int index) {
        return items[index];
    }
    void reverse() {
        for(int i = 0, j = count-1; i < j; i++, j--) {
            int temp = items[i];
            items[i] = items[j];
            items[j] = temp;
        } 
    }

    void intersect(Array temp) {
    
        for (size_t i = 0; i < count; i++)
        {
            if(items[i] == temp.at(i)) cout << items[i] << " " << endl;
        }
        
    }

    void insertAt(int index) {
        
    }
};

int main(int argc, char const *argv[]) {
    
    Array list(3);

    list.insert(10);
    list.insert(20);
    list.insert(80);
    list.insert(40);


    Array another(3);
    another.insert(10);
    another.insert(30);
    
    list.intersect(another);

    return 0;
}
 