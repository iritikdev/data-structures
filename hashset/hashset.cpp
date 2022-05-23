#include<bits/stdc++.h>
using namespace std;

class HashSet {
    vector<int> m;
    int count = 0;

    public:
    HashSet(int capacity) {
        m.resize(capacity);
    }

    void add(int item) {
        m[item] = 1;
        count++;
    }
    void remove(int item) {
        m[item] = 0;
        count--;
    }
    bool contains(int item) {
        return m[item];
    }
    int size() {
        return count;
    }

};

int main(int argc, char const *argv[])
{
    HashSet set(10);
    set.add(4);
    set.add(2);
    set.add(3);

    cout << set.contains(5) << endl;
    cout << set.size() << endl;
    return 0;
}
