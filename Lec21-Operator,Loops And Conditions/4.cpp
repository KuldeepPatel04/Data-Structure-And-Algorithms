#include<iostream>
using namespace std;
int main()
{
    int k=-1;

    //Left shift is safe and makes value double
    int i=k<<1;
    cout << i<< endl;

    //Right shift is not safe and not always gives half of original value
    i=k>>1;
    cout << i << endl;

    //Trick Questions

    //This after storing value in integer 
    int j=k<<-1;
    cout << j << endl;
    
    //This without storing value in integer
    j=4<<-1;
    cout << j << endl;
}