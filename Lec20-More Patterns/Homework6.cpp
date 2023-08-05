#include<iostream>
using namespace std;
int main()
{
    int k,ans,x=0;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        for(int j=1;j<=2*i+1;j++)
        {
            if(j%2==0 && j!=1)
            {
                cout << "*";
            }
            else
            {
                x=x+1;
                cout << x;
            }
        }
        cout << endl;
    }
    x=x-k;
    for(int i=k;i>0;i--)
    {
        for(int j=1;j<2*i;j++)
        {
            if(j%2==0 && j!=1)
            {
                cout << "*";
            }
            else
            {
                x=x+1;
                cout << x;
            }
        }
        x=x-2*i+1;
        cout << endl;
    }
}