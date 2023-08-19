#include<iostream>
#include<vector>
using namespace std;
int indexfinder(vector<int>arr)
{
    int start=0,end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]<arr[mid-1])
        {
            end=mid;
        }
        else 
        {
            start=mid+1;
        }
    }
            return arr[mid];
}
int main()
{
    vector <int>arr{11,12,13,14,15,7,5,1};
    int index=indexfinder(arr);
    cout << index << endl;
}