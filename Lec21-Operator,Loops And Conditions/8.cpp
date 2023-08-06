#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    switch(k)
    {
        case 1:cout << "k" << endl;

        case 2:cout << "u" << endl;
        break;
        case 3:cout << "l" << endl;
        break;
        case 4:cout << "d" << endl;
        break;
        case 5:cout << "e" << endl;
        break;
        case 6:cout << "e" << endl;
        break;
        case 7:cout << "p" << endl;
        break;
        default:cout <<"don't give garbage value" << endl;
    }
}

//compiler will keep compiling until it comes to break
//We can't use continue 
//we can't give two different cases a same name
//Integer,char,short,byte can be only used in switch case