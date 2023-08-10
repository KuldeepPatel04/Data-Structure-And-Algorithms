#include<iostream>
using namespace std;
int main()
{
    int c;
    cout <<"enter temprature in celcius " ;
    cin >> c;
    double k=c+273.15;
    double f=c*1.80+32.00;
    cout << "kelvin " << k << endl;
    cout << "frenheight " << f << endl;
}