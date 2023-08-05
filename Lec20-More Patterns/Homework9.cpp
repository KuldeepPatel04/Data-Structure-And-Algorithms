#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<2*k;j++)
        {
             if(j<=i || j>=2*k-i-1)
             {
                cout << "*";
             }
             else
             {
                cout << " ";
             }
        }
        cout << endl;
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<2*k;j++)
        {
             if(j<k-i || j>=k+i)
             {
                cout << "*";
             }
             else
             {
                cout << " ";
             }
        }
        cout << endl;
    }
}