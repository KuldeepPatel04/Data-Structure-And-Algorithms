#include<iostream>
using namespace std;
int main()
{
    // single conditions
    for (int i=0;i<=5;i++)
    {
        cout << i;
    }      
    cout << endl;

    // multiple conditions
    for(int i=2;i>=1 && i<=10;i++)
    {
        cout << i;
    }
    cout << endl;

    //for loop without any conditions
    int i=1;
    for(;;)
    {
        if(i<5){
        cout << i;
        i++;
        }
    }   

}