#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    int arr[4]={1,2,3,3};
    int brr[3]={3,3,4};
    vector<int>ans;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i]==brr[j])
            {
            ans.push_back(arr[i]);
            brr[j]=INT_MIN;
            }
        }
    }
    for(auto value:ans)
    {
        cout << value << " " << endl;

    }
}