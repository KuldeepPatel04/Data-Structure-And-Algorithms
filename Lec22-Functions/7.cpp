#include<iostream>
using namespace std;
char getgrade(int a)
{
    if(a>=90)
    {
        return 'a';
    }
    else if(a>=80)
    {
        return 'b';
    }
    else if(a>=70)
    {
        return 'c';
    }
    else 
    {
        return 'f';
    }
}
int main()
{
    int a;
    cout << "enter your marks" << endl;
    cin >> a;
    cout << "Your grade is " << getgrade(a) << endl; 
}