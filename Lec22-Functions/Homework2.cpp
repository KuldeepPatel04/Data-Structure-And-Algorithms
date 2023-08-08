#include<iostream>
using namespace std;
void num(int a)
{
    if(a%2==0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
}
int main()
{
    int a;
    cout << "enter a number " ;
    cin >>a ;
    num(a);
    return 0;
}