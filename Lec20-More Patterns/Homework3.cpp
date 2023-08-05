#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        for(int one=0;one<k-i+3;one++)
        {
            cout << "*";
        }
        for(int j=0;j<=i;j++)
        {
            cout << i+1;
            if(i!=0 && j!=i)
            {
                cout << "*";
            }
        }
        for(int two=0;two<k-i+3;two++)
        {
            cout << "*";
        }
        cout << endl;
    }
}