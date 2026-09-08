//https://codeforces.com/problemset/problem/1858/A
#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(c%2==1 && a>=b)
        {
            cout<< "First"<<endl;
        }
        else if(c%2==1 && a<b)
        {
            cout<< "Second"<<endl;
        }
        else if(c%2==0 && b>=a)
        {
            cout<< "Second"<<endl;
        }
        else
        {
            cout<< "First"<<endl;
        }
    }
    return 0;
}
