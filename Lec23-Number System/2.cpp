#include<iostream>
#include<cmath>
using namespace std;
int binary(int a)
{
    int binary=0;
    int i=0;
    while(a>0){
    int bit=a&1;
    binary=bit*pow(10,i++) +binary;
    a=a>>1;
    }
    return binary;
}
int main()
{
    int k;
    cout <<"enter a number" ;
    cin >> k;
    cout << "the binary is " << binary(k) ;
}