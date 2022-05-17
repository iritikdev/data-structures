#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // Declaring a Array
    int numbers[] = {10, 20, 30};

    // loop: for print item in array
    for (size_t i = 0; i < size(numbers); i++)
        cout << numbers[i] << " ";

    for (auto item : numbers)
        cout << item << endl;

    // declaring an array of size 5
    int nums[5] = {10,20,30};
    // 10   20  30  0   0 -> in memory

    return 0;
}
