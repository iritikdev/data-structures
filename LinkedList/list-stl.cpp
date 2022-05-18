#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    forward_list<int> items = {10,20,30};
    items.remove(10);
    items.remove(20);
    items.remove(30);
    for(int &item : items) cout << item << endl;

    return 0;
}
