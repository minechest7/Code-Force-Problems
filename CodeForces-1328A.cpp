//https://codeforces.com/problemset/problem/1328/A
#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;

    for(int i=0;i<test;i++)
    {
        int a,b;
        cin>>a>>b;

        int remainder=a%b;
        
        if(remainder==0)
        {
            cout<<0<<endl;
        }
        
        else
        {
            cout<<b-remainder<<endl;
        }

    }

    return 0;
}
