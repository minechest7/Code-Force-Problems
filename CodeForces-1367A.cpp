//https://codeforces.com/problemset/problem/1367/A
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int test;//the number of test cases
    cin>>test;

    for(int t=0;t<test;t++)
    {
        string a;//the given subString
        string original;//the original string
        cin>>a;

        if(a.size()==2)
        {
            cout<<a<<endl;
        }

        else{

        for(int j=1;j<a.size()-2;j++)
        {
            if(j%2==0)
            {
                original+=a[j];
            }
        }

        original=a[0]+original;
        original=original+a[a.size()-2]+a[a.size()-1];

        cout<<original<<endl;

        }
    }

    return 0;
}
