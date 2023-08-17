#include<iostream>
#include<vector>
using namespace std;
int findunique(vector<int>arr)
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
     vector<int>arr{1,2,3,1,5,2,5};
     cout << "unique number is " << findunique(arr);
     return 0;
}