//https://codeforces.com/contest/486/problem/A
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int n;//function input
    cin>>n;

    if(n==1)
    {
        cout<<-1<<endl;
    }
    else if(n%2==1)
    {
        cout<<((n+1)/2)*-1<<endl;
    }
    else if(n%2==0)
    {
        cout<<(n+1)/2<<endl;
    }

    return 0;
}
