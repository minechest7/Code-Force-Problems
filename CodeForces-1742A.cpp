//https://codeforces.com/problemset/problem/1742/A
#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;

    for(int i=1;i<=test;i++)
    {
        int arr[3];

        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }

        if(arr[0]+arr[1]==arr[2] || arr[1]+arr[2]==arr[0] || arr[2]+arr[0]==arr[1])
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }

    return 0;
}
