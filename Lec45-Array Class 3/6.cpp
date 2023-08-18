#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <vector<int>>arr;
    vector <int> a{1,2,3};
    vector <int> b{2,3,4,5,6};
    vector <int> c{3,4,5};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout << arr[i][j] ;
        }
        cout << endl;
    }
}

//We have to use i at line 17 because of colum number can be different