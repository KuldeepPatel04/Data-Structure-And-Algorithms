#include<iostream>
using namespace std;
int main()
{
    int k,num=1;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout <<" " << num;
            num=num+1;
        }
        cout << endl;
    }
}