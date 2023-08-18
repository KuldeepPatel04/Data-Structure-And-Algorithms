#include<iostream>
using namespace std;
int main()
{
    int arr[3]={1,2,3};
    int brr[3]={1,3,4};
    int crr[3]={3,4,1};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            { 
                if(arr[i]==brr[j] && arr[i]==crr[k])
                {
                    cout << " number is "<< crr[k] << endl;
                }
            }
        }
    }
}