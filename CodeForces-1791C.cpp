//https://codeforces.com/problemset/problem/1791/C
#include<iostream>
using namespace std;

int main()
{
    int test;//the number of test cases
    cin>>test;

    for(int t=0;t<test;t++)
    {
        int n;//length of the string s
        int flenght=0;//for counting the final length of the string
        string s;

        cin>>n>>s;

        for(int j=0;j<n/2;j++)
        {
            if((s[j]=='0' && s[n-1-j]=='1') || (s[j]=='1' && s[n-1-j]=='0'))
            {
                s[j]='a';
                s[n-1-j]='a';
            }
            else
            {
                break;
            }
        }

        for(int j=0;j<n;j++)
        {
            if(s[j]=='1'||s[j]=='0')
            {
                flenght++;
            }
        }
        cout<<flenght<<endl;
    }
    return 0;
}
