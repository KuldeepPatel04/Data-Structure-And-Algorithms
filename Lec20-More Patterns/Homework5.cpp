#include<iostream>
using namespace std;
int main()
{
    int k,ans;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<=2*i;j++)
        {
            if(j==0 || j==2*i)
            {
                cout << "*";
            }
            else if(j<=(2*i/2))
            {
                cout << j;
                ans=j;
            }
            else
            {
                ans=ans-1;
                cout << ans;
            }
        }
        cout << endl;
    }
    for(int i=k;i>=0;i--)
    {
        for(int j=0;j<=2*i-4;j++)
        {
            if(j==0 || j==2*i-4)
            {
                cout << "*";
            }
            else if(j<=((2*i-4)/2))
            {
                cout << j;
                ans=j;
            }
            else
            {
                ans=ans-1;
                cout << ans;
            }
        }
        cout << endl;
    }
}