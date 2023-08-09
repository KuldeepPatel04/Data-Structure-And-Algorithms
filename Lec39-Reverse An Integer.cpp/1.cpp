#include<iostream>
#include <limits.h>
using namespace std;
int reverse(int a)
{
    int i=1;
    int reverse=0;
    int num;
    bool nag=false;
    if(INT_MIN>=a)
    {
        return 0;
    }
    if(a<0)
    {
        nag=true;
        a=-a;
    }
    while(a>0)
    {
        if(a>=INT_MAX)
        {
            return 0;
        }
        num=a%10;
        reverse=reverse*10+num;
        a=a/10;
    }
    return nag?-reverse:reverse;
}
int main()
{
    int k;
    cout <<"enter a number ";
    cin >> k;
    cout << "reverse number is " << reverse(k) << endl;
    return 0;
}

//In this code we didn't use binary =binary+ans*pow(10,i++) which is used in Lec23
//Because if last bit of binary will be zero then Lec39 code will ignore it
//so in decimal to binary conversion we have to use that code only
//But in reversing an integer we have to use this code only