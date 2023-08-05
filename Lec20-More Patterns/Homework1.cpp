#include<iostream>
using namespace std;
int main()
{
   int k;
   cin >> k;
   for(int i=0;i<k;i++)
   {
      for(int j=0;j<k-i;j++)
      {
         if(i==0)
         {
            cout << "*";
         }
         else if(j==0 || j==k-i-1)
         {
            cout << "*";
         }
         else 
         {
            cout << " ";
         }
      }
      cout << endl;
   }
}