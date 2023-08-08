#include<iostream>
using namespace std;
int prime(int a)
{
    for(int i=2;i<=a;i++)
    {
    int l=0;
        for(int k=2;k<i;k++)
        {
            if(i%k==0)
            {
                l=l+1;
            }
        }
        if(l==0)
        {
            cout << i << endl;
    }
}
        }
int main()
{
    int k;
    cout << "enter a number " ;
    cin >> k;
    prime(k);
}