#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for(int i=0;i<k;i+=1)
    {
        for(int j=0;j<k;j++)
        {
            cout <<" * ";
        }
        cout << endl;
    }
}

//i and j shoud be 0 for initialization
//outer loop for row and inner loop for colm 