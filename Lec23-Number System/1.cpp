#include<iostream>
#include<cmath>
using namespace std;
int binary(int a)
{
    int s=0,ans;
    int binary=0;
    for(int i=a;i>0;i=i/2)
    {
        ans=i%2;
        binary=ans*pow(10,s++)+binary;
    }
    return binary;
}
int main()
{
    int k;
    cout << "enter a postive number " ;
    cin >> k;
    cout << "Binary number is " << binary(k) << endl;
    return 0;
}