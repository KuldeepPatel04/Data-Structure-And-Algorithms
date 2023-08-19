#include<iostream>
using namespace std;
int sqrt(int k)
{
    int start=0,end=k;
    int mid=start + (end - start)/2;
    int ans;
    while(start<end)
    {
        mid=start +(end -start)/2;
        if(mid*mid<k)
        {
            ans=mid;
            start=mid+1;
        }
        else if(mid*mid>k)
        {
            end=mid;
        }
        else
        {
            return mid;
        }
    }
    return ans;
}
int main()
{
    int k,precision;
    cin >> k;
    cout << "how many floating numbers you want ";
    cin >> precision;
    int ans=sqrt(k);
    double a=ans;
    double step=0.1;
     for(int i=0;i<precision;i++)
    {
        for(double j=a;j*j<=k;j=j+step)
        {
             a=j;
        }
        step=step/10;
    }
    cout << a;
}