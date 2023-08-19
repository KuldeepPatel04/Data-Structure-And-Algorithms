#include<iostream>
#include<vector>
using namespace std;
int indexfinder(vector<int>arr,int target)
{
    int start=0,end=arr.size()-1,c=target,occur=0;
    while(start<end)
    {
        int mid=start+(end-start)/2;
        if(mid==start)
        {
            break;
        }
        else if(arr[end]-arr[mid]!=end-mid)
        {
            start=mid;
        }
        else 
        {
            end=mid;
        }
    }
    return arr[start]+1;
}
int main()
{
    vector <int>arr{11,12,13,14,15,16,17,19};
    int target=3;
    int index=indexfinder(arr,target);
    cout << index << endl;
}