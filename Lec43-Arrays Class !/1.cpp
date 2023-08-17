#include<iostream>
using namespace std;
int main()
{
    bool a[23];
    char ar[106];
    int arr[5]={1,2,3,4,5};
    cout  << "address - "<< arr << endl;
    cout << "array created successfully" << endl;
    cout << sizeof(arr);
    return 0;
}

//Array shows its first/base address only
//If no value is initialized to the array then it will store garbage value itself
//If any one value is initialized then and then only other values will be initialized as zero