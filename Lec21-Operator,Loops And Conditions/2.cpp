#include<iostream>
using namespace std;
int main()
{
    int k,n;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        for(int space1=0;space1<k-i;space1++)
        {
            cout << " ";
        }
        if(i<k)
        {
            cout << "1";
        }
        if(i!=k-1)
        {
        for(int space2=0;space2<=i-2;space2++)
        {
            cout << " ";
        }
        }
        if(i>1 && i<k-1)
        {
            for(int d=0;d<i-1;d++)
            {
                cout << " " ;
            }
        }

            if(i<k-1 && i!=0)
            {
                cout << " " << i;
            }
            else if(i==k-1)
            {
                for(int y=0;y<k-1;y++)
                {
                    cout << " " << y+2;
                }
            }
        cout << endl;
    }
}