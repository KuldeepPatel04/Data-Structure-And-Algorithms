#include<iostream>
using namespace std;
float findarea(int a)
{
    float k=3.14*a;
    return k;
}
int main()
{
    int n;
    cout << "enter number ";
    cin >> n;
    cout << "area of circle is " << findarea(n) << endl;
    return 0;
}