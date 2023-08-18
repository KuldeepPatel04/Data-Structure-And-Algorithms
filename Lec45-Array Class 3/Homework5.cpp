#include<iostream>
using namespace std;
int main()
{
    int i=0,arr[6]={1,2,3,4,5,7};
    i=arr[0];
    for(int j=1;j<6;j++)
    {
        i=i+1;
        if(i!=arr[j])
        {
            cout << i;
        }
    }
}