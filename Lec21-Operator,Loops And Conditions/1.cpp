#include<iostream>
using namespace std;
int main()
{
    int k,ans;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        for(int space=0;space<k-i;space++)
        {
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            if(j<=(2*i+1)/2)
            {
                ans=i+j+1;
                cout << ans;
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