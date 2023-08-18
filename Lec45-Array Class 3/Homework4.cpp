#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,4,4,4,6,6},ans;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]==arr[j])
            {
                if(arr[i]==ans)
                break;
                cout << arr[i] << endl;
                ans=arr[i];
                break;
            }
        }
    }
}