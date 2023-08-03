#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        for(int space1=0;space1<k-i;space1++)
        {
            cout << " ";
        }
        for(int j=0;j<=i;j++)
        {
            cout << j+i+1;
        }
        for(int m=0;m<i;m++)
        {
            cout << 2*i-m;
        }
        cout << endl;
    }
}