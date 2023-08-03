#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for (int i=0;i<k;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << j+1;
        }
        cout << endl;
    }      
}