//https://codeforces.com/problemset/problem/1807/A
#include<iostream>
using namespace std;

int main()
{
    
    int test;//the number of test cases
    cin>>test;
    
    for(int t=0;t<test;t++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a+b==c)
        {
            cout<< "+"<<endl;
        }
        else
        {
            cout<< "-"<<endl;
        }
    }
    
    return 0;
}
