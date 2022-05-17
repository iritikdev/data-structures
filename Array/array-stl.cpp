#include<bits/stdc++.h>
using namespace std;

// https://en.cppreference.com/w/cpp/container/array

int main(int argc, char const *argv[])
{
    array<int, 3> items = {10, 20, 30};

    cout << items.front() << endl;
    cout << items.back() << endl;
    cout << items.at(1) << endl;
    cout << items[0] << endl;
    // return address of array
    cout << items.data();


    return 0;
}
