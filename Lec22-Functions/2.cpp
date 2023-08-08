#include<iostream>
using namespace std;
void printnum(int a)
{
    a++;
    cout << a << endl;

}
int main()
{
    int a=1;
    printnum(a);
    a--;
    cout << a << endl;
    printnum(a);
    return 0;
}  