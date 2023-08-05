#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        for(int space1=0;space1<k-i-1;space1++)
        {
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            if(j==0 || j==i*2)
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
        for(int space1=0;space1<i;space1++)
        {
            cout << " ";
        }
        for(int j=0;j<2*k-2*i-1;j++)
        {
            if(j==2*k-2*i-2 || j==0)
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