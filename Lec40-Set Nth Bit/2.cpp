#include<iostream>
using namespace std;
int bit(int a,int b)
{
    int mask=1 << b;
    int ans=a|mask;
    return ans;
}
int main()
{
    int k,a;
    cout << "enter a number " ;
    cin >> k;
    cout << "enter nth bit ";
    cin >> a;
    cout << bit(k,a);
}