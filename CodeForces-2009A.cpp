//https://codeforces.com/problemset/problem/2009/A
#include<iostream>
using namespace std;

int main()
{
    int test;//number of test cases
    cin>>test;
    
    for(int t=0;t<test;t++)
    {
        int a,b;
        cin>>a>>b;
        
        cout<<b-a<<endl;
    }
    
    return 0;
}
