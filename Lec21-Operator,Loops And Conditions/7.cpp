#include<iostream>
using namespace std;
int kuldeep=0;
int main()
{
    int k=5;
    if(3)
    {
        cout << k << endl;
        k=k+5;
    }
    if(2)
    cout << k << endl;
    {
        int k=1;
        //Here K is local variable
        cout << k << endl;
        cout << kuldeep << endl;
        //here kuldeep is globle variable
    }
    kuldeep=kuldeep+1;
    cout << kuldeep << endl;
    int kuldeep=55;
}

//variable defined inside any loop or condition is called local bariable and it only belongs to the loop only
//if any variable defined in main loop and if we make any changes in it inside loop then it will permenent changes
//Globle variable can be acessed by anywhere in code in loop also
//Globle variable can be redifined inside the main code again without any error