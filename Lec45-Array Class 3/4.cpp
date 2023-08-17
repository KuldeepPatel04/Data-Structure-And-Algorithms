#include<iostream>
#include<limits.h>
using namespace std;
void printrowsum(int arr[][4],int row,int cols)
{
    int ans=INT_MIN;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]>ans)
            {
                ans=arr[i][j];
            }
        }
    }
    cout << ans;
}
int main()
{
    int arr[4][4];
    int row=4,colm=4;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    printrowsum(arr,row,colm);
}