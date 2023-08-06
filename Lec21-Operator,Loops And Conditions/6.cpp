#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        cout << "kuldeep" << endl;
        if(i==2)
        {
            break;
        }
    }
    cout << "kalariya" << endl;
    
    for(int i=0;i<5;i++)
    {
        continue;
        cout << "kuldeep" << endl;
    }


}

//Break keyword will not affect the loop which is outside the loop in whick break keyword is
//break statement can be used inside the if else statements
//continue will take compiler direct to third braket in loop