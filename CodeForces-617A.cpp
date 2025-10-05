//https://codeforces.com/problemset/problem/617/A
#include<iostream>
using namespace std;

int main()
{
    int x;//the coordinate of friends house
    cin>>x;

    if(x%5==0)
    {
        cout<<x/5<<endl;
    }
    else
    {
        cout<<(x/5)+1<<endl;
    }

    return 0;
}

