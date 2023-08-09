#include<iostream>
#include<cmath>
using namespace std;
int bit(int a)
{
    int k,h;
    int y=a;
    int ans=0;
    int j=0;
    while(y>0)
    {
        k=y%2;
        ans=ans+k*pow(10,j++);
        y=y/2;
    }
    int o=ans%100;
    if(o/100==0)
    {
         h=ans+100;
    }
    else
    {
         h=ans-100;
    }
    j=0;
    int decimal=0,i;
    while(h>0)
    {
        i=h%10;
        decimal=decimal+i*pow(2,j++);
        h=h/10;
    }
    return decimal;
}
int main()
{
    int k;
    cout << "enter a number " ;
    cin >>k;
    cout << "after setting 2nd bit from last " << bit(k) << endl;
    return 0;
}