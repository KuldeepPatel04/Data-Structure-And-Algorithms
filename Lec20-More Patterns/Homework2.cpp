#include<iostream>
using namespace std;
int main()
{
    int k,ans;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        for(int space=0;space<k-i-1;space++)
        {
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            if(j<=(2*i/2))
            {
                cout << j+1;
                ans=j+1;
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