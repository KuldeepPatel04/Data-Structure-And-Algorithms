#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int start=0,end=5;
    while(start<=end)
    {
        cout << arr[start];
        if(start==end)
        break;
        start++;
        cout << arr[end];
        end--;
    }
}