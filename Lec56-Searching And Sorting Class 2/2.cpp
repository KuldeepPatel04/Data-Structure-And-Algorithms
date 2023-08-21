#include<iostream>
using namespace std;
void findnum(int arr[][3],int i)
{
    int start=0,end=8,row=2,colm=3,col=2;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        row=mid/colm;
        col=mid%colm;
        if(arr[row][col]<i)
        {
            start=mid+1;
        }
        else if(arr[row][col]>i)
        {
            end=mid;
        }
        else 
        {
            cout << row << endl << col;
            break;
        }
    }
}
int main()
{
    int i;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout << "enter a number " ;
    cin >> i;
    findnum(arr,i);
}