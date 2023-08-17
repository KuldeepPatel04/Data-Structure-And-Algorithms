#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "enter array elements" << endl;
    for(int i=0;i<10;i++)
    {
        cin >> arr[i];
    }
    cout << "printing values of array" << endl;
    for(int i=0;i<10;i++)
    {
        cout << arr[i]*2 << endl;
    }
    return 0;
}