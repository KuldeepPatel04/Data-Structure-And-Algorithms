#include<iostream>
using namespace std;
void sort(int arr[])
{
    int start=0,end=4,i=0;
    while(start<=end)
    {
        if(arr[i]==0)
        {
            i++;
            start++;
        }
        else if(arr[i]==1)
        {
            swap(arr[end],arr[start]);
            end--;
        }
    }
}
int main()
{
    int arr[5]={1,0,0,1,1};
    sort(arr);
    for(int i=0;i<5;i++)
    {
        cout << arr[i] << " " ;
    }
}