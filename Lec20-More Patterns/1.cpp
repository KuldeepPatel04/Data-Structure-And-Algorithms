#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        for(int space1=0;space1<k-i-1;space1++)
        {
            cout << " " ;
        }
        for(int j=0;j<=i;j++)
        {
            cout << "* ";
        }
        for(int space2;space2<k-i-1;space2++)
        {
            cout << " " ;
        }
        cout << endl;
    }
     for(int i=0;i<k;i++)
    {
        for(int space1=0;space1<i;space1++)
        {
            cout << " " ;
        }
        for(int j=0;j<k-i;j++)
        {
            cout << "* ";
        }
        for(int space2=0;space2<i-1;space2++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

//first loop is copy of Lec5-Homework1
//Sesond loop is copy of Lec5-Homework2