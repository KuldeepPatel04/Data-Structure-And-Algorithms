#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,2,3,4,5};
    int brr[3] ={1,2,2};
    for(int i=0;i<sizeof(arr)/4;i++)
    {
        for(int j=0;j<sizeof(brr)/4;j++)
        {
            if(arr[i]==brr[j])
            {
                cout << arr[i] << endl;
                arr[i]=-122;
            }
        }
    }
}

//Here we have to take arr[i]==any garbage value to avoid error
//we can also use break and INT_MIN there