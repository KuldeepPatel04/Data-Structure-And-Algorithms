#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int sum=10;
    for(int i=0;i<sizeof(arr)/4;i++)
    {
        for(int j=i+1;j<sizeof(arr)/4;j++)
        {
            for(int k=i+2;k<sizeof(arr)/4;k++)
            {
                for(int o=i+3;o<sizeof(arr)/4;o++)
                {
                if(arr[i]+arr[j]+arr[k]+arr[o]==sum)
                {
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] <<"," << arr[o] << ")" << endl;
                }
                }
            }
        }
    }
}