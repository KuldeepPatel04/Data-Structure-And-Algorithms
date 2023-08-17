#include<iostream>
using namespace std;
void printarray(int brr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout << brr[i] << endl;
    }

}
void inc(int arr[],int size)
{
    arr[0]=arr[0]+10;
    printarray(arr,size);
}
int main()
{
    int arr[]={5,6};
    int size=2;
    inc(arr,size);
    printarray(arr,size);
}

//Array is call by reference in function
//If we change array in function then it will also change in int main
//We can give another name in function as given above