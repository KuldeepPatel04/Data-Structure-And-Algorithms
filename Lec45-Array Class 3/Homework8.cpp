#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int m=3,n=3,c=1;
    int startcolm=0,endcolm=2;
    int startrow=0,endrow=2;
    while(c<=m*n)
    {
        for(int i=startcolm;i<=endcolm && c<=m*n;i++)
        {
            cout <<  arr[startrow][i];
            c++;
        }
            startrow++;
        for(int i=startrow;i<=endrow && c<=m*n;i++)
        {
            cout << arr[i][endcolm];
            c++;
        }
            endcolm--;
        for(int i=endcolm;i>=0 && c<=m*n;i--)
        {
            cout << arr[endrow][i];
            c++;
        }
            endrow--;
        for(int i=endrow;i>=startrow && c<=m*n;i--)
        {
            cout << arr[i][startcolm];
            c++;
        }
            startcolm++;
    }
}