#include<iostream>
using namespace std;
void counting(int a)
{
    for(int i=0;i<=a;i++)
    {
        cout   << i << endl;
    }
}
int main()
{
    int a;
    cout << "enter a number " ;
    cin >> a ;
    counting(a);
    return 0;
}