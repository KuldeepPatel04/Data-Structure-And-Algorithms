#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int k,ans=INT_MIN,arr[6]={1,3,56,67,88};
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }
    }
    cout << ans;

}

//Using int min and int max is good practice