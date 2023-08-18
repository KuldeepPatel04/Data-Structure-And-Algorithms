#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    for(int i=0;i<3;i++)
    {
        if(i%2==0)
        for(int j=0;j<3;j++)
        {
            cout << arr[j][i] << " ";
        }
        else
        for(int k=2;k>=0;k--)
        {
            cout << arr[k][i] << " ";
        }
    }
}