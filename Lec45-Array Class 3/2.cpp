#include<iostream>
using namespace std;
void printrowsum(int arr[][4],int row,int cols)
{
    for(int i=0;i<4;i++)
    {
        int sum=0;
        for(int j=0;j<4;j++)
        {
            sum=sum+arr[i][j];
        }
        cout <<"sum is " << sum << endl;
    }
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