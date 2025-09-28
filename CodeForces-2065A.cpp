//https://codeforces.com/problemset/problem/2065/A
#include<iostream>
#include<string>
using namespace std;

int main()
{

    int test;
    cin>>test;

    for(int i=0;i<test;i++)
    {
        string W;
        cin>>W;

        int Wsize=W.length();//for storing the length of W string

        W.erase(Wsize-1,1);
        W[Wsize-2]='i';

        cout<<W<<endl;

    }

    return 0;
}
