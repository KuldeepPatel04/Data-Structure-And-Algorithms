#include<iostream>
using namespace std;
int maxnum(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c && b>a)
    {
        return b;
    }
    else if(c>b && c>a)
    {
        return c;
    }
}
int main()
{ 
    int a,b,c;
    cout << "enter number one " << endl;
    cin >> a;
    cout << "enter number two " << endl;
    cin >> b;
    cout << "enter number three " << endl;
    cin >> c;
    cout << "the max number is " << maxnum(a,b,c) << endl;
}