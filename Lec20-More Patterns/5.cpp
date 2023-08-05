#include<iostream>
using namespace std;
int main()
{
    char k;
    k=64;
    int j,m;
    cin >> j;
    for(int i=0;i<j;i++)
    {
        for(int l=0;l<2*i+1;l++)
        {
            if(l<=(2*i+1)/2)
            {
                k=k+1;
                cout << k;
            }
            else
            {
                k=k-1;
                cout << k;
            }
        }
        k=64;
        cout << endl;
    }
}