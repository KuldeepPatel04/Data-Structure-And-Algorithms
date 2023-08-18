#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int start=0,end=size-1,element;
    while(start<=end)
    {
        int mid=(start +end)/2;
        element=arr[mid];
        if(element==key)
        {
            return mid;
        }
        else if(element<key)
        {
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int key=1,size=7;
    int target=binarysearch(arr,size,key);
    if(target==-1)
    {
        cout << "target not found" << endl;
    }
    else
    {
        cout << "target index is " << target << endl;
    }
    return 0;
}