#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        for(int space1=0;space1<=i;space1++)
        {
            cout << " " ;
        }
        for(int j=0;j<k-i;j++)
        {
            cout << "* ";
        }
        for(int space2=0;space2<=i;space2++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

//third loop is not necessaty