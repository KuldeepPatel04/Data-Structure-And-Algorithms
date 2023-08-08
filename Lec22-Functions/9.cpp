#include<iostream>
using namespace std;
int even(int a)
{
    int k=0;
    for(int b=0;b<=a;b+=2)
    {
        k=b+k;
    }
    return k;
}
int odd(int a)
{
    int sum=0;
    for(int b=1;b<=a;b+=2)
    {
        sum=b+sum;
    }
    return sum;
}
int main()
{
    int a;
    cout << "enter a number ";
    cin >>a;
    cout <<"sum of even numbers" << even(a) << endl;
    cout << "sum of odd number" << odd(a) << endl;
    return 0;
}