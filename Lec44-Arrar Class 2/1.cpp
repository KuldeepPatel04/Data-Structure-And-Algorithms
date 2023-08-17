#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>arr(n,55);
    arr.pop_back();
    arr.push_back(5);
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
    return 0;
}

//Here n is size and 55 is initialized to all the numbers