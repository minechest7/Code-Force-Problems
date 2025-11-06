//https://codeforces.com/problemset/problem/490/A
#include<iostream>
#include<math.h>
using namespace std;

bool perfect(int *arr,int arrSize);

int main()
{
    int test;//number of test cases
    cin>>test;

    for(int t=0;t<test;t++)
    {
        bool yes;//for checking if the melody is perfect
        int n;//the number of nodes in the melody
        cin>>n;

        int arr[n];//the melodys
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        yes=perfect(arr,n);

        if(yes==true)
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

bool perfect(int *arr,int arrSize)
{
    bool yes=true;

    for(int i=0;i<arrSize-1;i++)
    {
        if(!(abs(arr[i]-arr[i+1])==5 || abs(arr[i]-arr[i+1])==7))
        {
            yes=false;
            break;
        }
    }
    return yes;
}
