#include<iostream>
using namespace std;
int addnum(int a,int b)
{
    int c=a+b;
    return c;
}
int main()
{
    int a,b;
    cout << "enter number one " << endl;
    cin >> a;
    cout << "enter number two" << endl;
    cin >> b;
    cout <<"the sum is " << addnum(a,b) << endl;
    return 0;
}