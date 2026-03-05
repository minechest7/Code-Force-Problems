//https://codeforces.com/problemset/problem/112/A
#include<iostream>
#include<string>
using namespace std;

void converter(string &a,string &b);

int main()
{
    string str1;
    string str2;

    cin>>str1>>str2;

    converter(str1,str2);

    cout<<str1.compare(str2)<<endl;

    return 0;
}

void converter(string &a,string &b)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=(char)(a[i]+32);
        }
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]>='A' && b[i]<='Z')
        {
            b[i]=(char)(b[i]+32);
        }
    }
}
