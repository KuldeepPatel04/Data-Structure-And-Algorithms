#include<iostream>
using namespace std;
int main()
{
    int arr[8]={1,0,1,1,0,0,1,0};
    int start=0;
    int i=0;
    int end=sizeof(arr)/4-1;
    while(start<end)
    {
        if(arr[i]==0)
        {
            start++;
            i++;                                                                  
        }
        else
        {
            swap(arr[i],arr[end]);
            end--;
        }
    }
    for(int i=0;i<sizeof(arr)/4;i++)
    {
        cout << arr[i] ;    
     }
}