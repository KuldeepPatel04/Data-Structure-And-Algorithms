#include<iostream>
using namespace std;
bool find(int arr[],int size,int k)
{
    for(int i=0;i<size;i++)
    {
        if(k==arr[i])
        return 1;
    }
    return 0;
}
int main()
{
    int k,arr[6]={1,2,3,4,5,6};
    cout << "enter the key to find in array" << endl;
    cin >> k;
    if(find(arr,sizeof(arr)/4,k))
    {
        cout << "found " << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}