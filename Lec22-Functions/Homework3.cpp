#include<iostream>
using namespace std;
int fact(int a)
{
    int ans=1;
    for(int i=1;i<=a;i++)
    {
        ans=ans*i;
    }
    return ans;
}
int main()
{
    int k;
    cout << "enter a number ";
    cin >> k;
    cout << "the factorial is " << fact(k) << endl;
    return 0;
}