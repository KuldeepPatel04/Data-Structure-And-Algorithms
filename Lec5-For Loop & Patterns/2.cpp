#include<iostream>
using namespace std;
int main()
{
    int i;
    cout << "enter marks" << endl;
    cin >> i;
    if(i>=90)
    {
        cout << "a grade" << endl;
    }
    else if(i>=80)
    {
        cout << "b grade" << endl;
    }
    else if (i>=70)
    {
        cout << "c grade" << endl;
    }
    else if (i>=60)
    {
        cout << "d grade" << endl;
    }
    else 
    {
        cout << "need hardwork" << endl;
    }
    return 0;
}
//its not necessaty to add else at last