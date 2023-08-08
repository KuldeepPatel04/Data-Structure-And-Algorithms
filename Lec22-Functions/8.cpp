#include<iostream>
using namespace std;
void marks(int a)
{
    switch (a/10)
    {
        case 10: cout << " a" << endl;
        break;
        case 9: cout << " b" << endl;
        break;
        case 8: cout << " c" << endl;
        break;
        case 7: cout << " d" << endl;
        break;
        case 6: cout << " e" << endl;
        break;
        default: cout << " f" << endl;
    }
}
int main()
{
    int m;
    for(int m=0;m<=100;m++)
    {
        cout << "for your marks " << m << " grade is  ==";
        marks(m);
    }
    return 0;
}