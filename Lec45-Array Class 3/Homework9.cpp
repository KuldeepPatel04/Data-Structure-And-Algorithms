#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int k,carry=0;
    cin >> k;
    vector <int>arr;
    arr.push_back(1);
        for(int i=2;i<=k;i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                int x=arr[j]*i+carry;
                arr[j]=x%10;
                carry=x/10;
            }
                while(carry)
                {
                    arr.push_back(carry%10);
                    carry=carry/10;
                }
        }
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] ;
    }
}