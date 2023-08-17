#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int start=0,end=6,temp;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
        if(start==end)
        break;
    }
    for(int i=0;i<7;i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}