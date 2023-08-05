#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k-i;j++)
        {
            if(j>0 && j<k-i-1 && i!=0)
            {
                cout << "  ";
            }
            else if(j==0)
            {
                cout <<i+1;
            }
            else if(j<k-1 && i==0)
            {
                cout <<" " << j+1;
            }
            else 
            {
                cout << " " <<k;
            }
        }
        cout << endl;
    }
}