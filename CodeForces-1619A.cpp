//https://codeforces.com/problemset/problem/1619/A
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int test;//the number of test cases
    cin>>test;

    for(int t=0;t<test;t++)
    {
        string s;
        string a;//for storing first half of the string
        string b;//for storing second half of the string

        cin>>s;
        int sSize=s.length();//size of the s string

        if(sSize%2==1)
        {
            cout<< "NO"<<endl;
        }
        else
        {
            a=s.substr(0,sSize/2);
            b=s.substr(sSize/2,sSize/2);

            if(a==b)
        {
            cout<< "YES"<<endl;
        }

        else
        {
            cout<< "NO"<<endl;
        }


        }

    }

    return 0;
}
