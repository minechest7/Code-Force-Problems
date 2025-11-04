//https://codeforces.com/problemset/problem/1950/A
#include<iostream>
using namespace std;

int main()
{
    int test;//the number of test cases;
    cin>>test;

    for(int t=0;t<test;t++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a<b && b<c)
        {
            cout<< "STAIR"<<endl;
        }
        else if(a<b && b>c)
        {
            cout<< "PEAK"<<endl;
        }
        else
        {
            cout<< "NONE"<<endl;
        }
    }
    return 0;
}
