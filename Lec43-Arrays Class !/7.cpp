#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,3,5,3,5},k=31;
    for(int i=0;i<sizeof(arr)/4;i++)
    {
        for(int j=i+1;j<sizeof(arr)/4;j++)
        {
            if(arr[i]+arr[j]==6)
            {
                cout << arr[i] << "," << arr[j] << endl;
                k=0;
                break;
            }
        }
        if(k==0)
        break;
    }
}