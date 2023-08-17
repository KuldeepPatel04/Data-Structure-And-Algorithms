#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr1[4]={1,4,5,6};
    int arr2[2]={3,4};
    vector <int>ans;
    for(int i=0;i<4;i++)
    {
        ans.push_back(arr1[i]);
    }
    for(int j=0;j<2;j++)
    {
        ans.push_back(arr2[j]);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << endl;
    }
}