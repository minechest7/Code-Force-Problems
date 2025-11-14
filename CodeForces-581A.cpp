//https://codeforces.com/problemset/problem/581/A
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b;//the number of red socks(a)and blue socks(b)
    cin>>a>>b;
    int c=min(a,b);

    if(a==b)
    {
        cout<<a<<" "<<0<<endl;
    }
    else
    {
        cout<<c<< " "<<((a+b)/2)-c<<endl;
    }
    return 0;
}
