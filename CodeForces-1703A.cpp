//https://codeforces.com/problemset/problem/1703/A
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string transformUpper(string &a);

int main()
{
    int test;
    cin>>test;

    for(int i=1;i<=test;i++)
    {
       string s;//string to take input
       string comp="YES";//string to compare

       cin>>s;

        s=transformUpper(s);//converting the entire string to uppercase

       if(s.compare(comp)==0)
       {
           cout<<"YES"<<endl;
       }

       else
       {
           cout<< "NO"<<endl;
       }

    }

    return 0;
}

string transformUpper(string &a)
{
    for(int i=0;i<3;i++)
    {
        a[i]=toupper(a[i]);
    }
    return a;
}
