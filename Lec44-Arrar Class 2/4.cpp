#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[4]={1,2,3,4};
    int brr[3]={2,3,4};
    vector<int>ans;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i]==brr[j])
            ans.push_back(arr[i]);
        }
    }
    for(auto value:ans)
    {
        cout << value << " " << endl;

    }
}