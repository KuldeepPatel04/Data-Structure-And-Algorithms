#include<iostream>
using namespace std;
void printrowsum(int arr[][4],int row,int cols,int transpose[4][4])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout << transpose[i][j];
        }
        cout << endl;
    }
}
int main()
{
    int arr[4][4],transpose[4][4];
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
    printrowsum(arr,row,colm,transpose);
}