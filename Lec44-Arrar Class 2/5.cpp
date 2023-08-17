#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,6};
    vector<int> ans;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]+arr[j]==5)
            {
                cout << arr[i] << arr[j] << endl;
            }
        }
    }
}