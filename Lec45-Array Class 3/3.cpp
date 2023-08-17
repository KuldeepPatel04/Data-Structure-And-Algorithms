#include<iostream>
using namespace std;
bool printrowsum(int arr[][4],int row,int cols,int key)
{
    for(int i=0;i<4;i++)
    {
        int sum=0;
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==key)
            return true;
        }
    }
        return false;
}
int main()
{
    int arr[4][4];
    int row=4,colm=4,key;
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
    cout << "enter the key" << endl;
    cin >> key;
    if(printrowsum(arr,row,colm,key))
    cout << "key is matched" << endl;
    else
    cout << "key does not match" << endl;
}