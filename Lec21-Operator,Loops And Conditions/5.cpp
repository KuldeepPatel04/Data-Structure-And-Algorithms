#include<iostream>
using namespace std;
int main()
{
    //Post increment
    int i=0;
    cout << i++ << endl;
    cout << i << endl;

    //Pre increment
    i=0;
    cout << ++i << endl;
    cout << i << endl;

    //Trick questions

    i=0;
    int c= (i++) + 1;
    cout << c << endl;

    //this because operator precedence 
    //Using brackets is prefered
    //It gives answer 49 because of memory locations also answer is compiler based
    i=5;
    cout << (++i) * (++i) << endl;

}