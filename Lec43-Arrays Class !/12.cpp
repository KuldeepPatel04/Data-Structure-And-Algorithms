#include<iostream>
using namespace std;
int main()
{
    int one=0,zero=0;
    int arr[5]={1,0,0,1,1};
    for(int i=0;i<5;i++)
    {
        if(arr[i]==0)
        zero++;
        else
        one++;
    }
    cout << "number of zeros are " << zero << endl;
    cout << "nunber of one are " << one << endl;
    return 0;
}