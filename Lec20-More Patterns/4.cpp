#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<2*i+1;j++)
        {
            if(j%2!=0 && j!=0)
            {
                cout << "*";
            }
            else
            {
                cout << i+1;
            }
        }
        cout << endl;
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<=k-2*i+3;j++)
        {
            if(j%2!=0 && j!=0)
            {
                cout << "*";
            }
            else
            {
                cout << k-i;
            }
        }
        cout << endl;
    }
}