#include<iostream>
using namespace std;
int prime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            cout << "number is not prime" << endl;
            return 0;
        }
    }
    cout << "number is prime" << endl;
}
int main()
{
    int k;
    cout << "enter a number " ;
    cin >> k;
    prime(k);
}