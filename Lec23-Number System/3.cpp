#include<iostream>
#include<cmath>
using namespace std;
int decimal(int a)
{
    int decimal=0;
    int num;
    int i=0;
    while(a>0)
    {
        num=a%10;
        decimal=decimal+num*pow(2,i++);
        a=a/10;
    }
    return decimal;
}
int main()
{
    int k;
    cout << "enter any binary number ";
    cin >> k;
    cout << "your decimal number is " << decimal(k) << endl;
    return 0;
}