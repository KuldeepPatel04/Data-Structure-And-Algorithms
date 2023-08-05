#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for(int i=1;i<=k;i++)
    {
        int c=1;
        for(int j=1;j<=i;j++)
        {
            cout << c;
            c=c*(i-j)/j;
        }
        cout << endl;
    }
}