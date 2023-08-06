#include<iostream>
using namespace std;
int main()
{
    bool a=true;
    bool b=false;
    if(a & b)
    {
        cout << "And" << endl;
    }
    if(a | b)
    {
        cout << "Or" << endl;
    }
    if(a ^ b)
    {
        cout << "Xor" << endl;
    }
    cout << ~(b) << " Not" << endl;

    //Trick Question
    if(a)
    {
        cout << "kuldeep";
    }
}