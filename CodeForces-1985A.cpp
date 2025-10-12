//https://codeforces.com/problemset/problem/1985/A
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int test;
    cin>>test;

    for(int t=0;t<test;t++)
    {
        string a,b;
        string temp;
        cin>>a>>b;

        temp=a[0];
        a[0]=b[0];
        b[0]=temp[0];

        cout<<a<<" "<<b<<endl;
    }

    return 0;
}
