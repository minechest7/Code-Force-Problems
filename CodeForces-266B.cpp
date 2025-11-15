//https://codeforces.com/problemset/problem/266/B
#include<iostream>
using namespace std;

int main()
{
    int n;//the number of people at the queue
    int t;//the number of seconds after time
    string s;//the school chldrens initial arrangements

    cin>>n>>t;
    cin>>s;

    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n-1;j++)//checking the entire string and swapping whenever  B is in front of G
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                char temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                j++;
            }
        }
    }

    cout<<s<<endl;

    return 0;
}
