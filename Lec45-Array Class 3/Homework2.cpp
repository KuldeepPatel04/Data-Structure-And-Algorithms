#include<iostream>
using namespace std;
int main()
{
    int arr[8] ={1,1,0,2,2,0,1,1};
    int start=0,end=7,i=0;
    while(start<=end)
    {
        if(arr[i]==0)
        {
            start++;
            i++;
        }
        else if(arr[start]==0)
        {
            swap(arr[start],arr[i]);
            i++;
        }
        else if(arr[start]==2)
        {
            swap(arr[start],arr[end]);
            end--;
        }
        else if(arr[i]==2)
        {
            swap(arr[start],arr[end]);
            end--;
        }
        else if(arr[i]==1)
        {
            start++;
        }
    }
    for(int i=0;i<8;i++)
    {
        cout << arr[i];
    }
}