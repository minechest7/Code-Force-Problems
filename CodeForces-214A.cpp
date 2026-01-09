//https://codeforces.com/problemset/problem/214/A
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int pairs=0;//the number of pairs valid in the equation

    int big=max(n,m);//finding the larger value between n and m numbers

    for(int i=0;i<=big;i++)
    {
        for(int j=0;j<=big;j++)
        {
            if(i*i+j==n && i+j*j==m)
            {
                pairs++;
            }
        }
    }


    cout<<pairs<<endl;
    return 0;
}
