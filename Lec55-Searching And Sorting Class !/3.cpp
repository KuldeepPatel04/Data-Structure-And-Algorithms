#include<iostream>
#include<vector>
using namespace std;
int indexfinder(vector<int>arr,int target)
{
    int start=0,end=arr.size()-1,ans=-1,c=target,occur=0;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(target==arr[mid])
        {
            end=mid-1;
            ans=mid;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
        else if(target>arr[mid])
        {
            start=mid+1;
        }
    }
    while(c==target)
    {
        occur=occur+1;
        c=arr[++ans];
    }
    return occur;
}
int main()
{
    vector <int>arr{1,2,3,3,3,3,3,4,5};
    int target=3;
    int index=indexfinder(arr,target);
    cout << index << endl;
}