//https://codeforces.com/problemset/problem/2132/A
#include<iostream>
#include<string>
using namespace std;

int main()
{
    //initializing the number of test cases
    int test;
    cin>>test;

    for(int i=1;i<=test;i++){

        int alen;//the length of variable a
        cin>>alen;

        string a;
        cin>>a;

        int blen;//the length of variable b
        cin>>blen;

        string b;
        cin>>b;

        string c;
        cin>>c;
        //running the code blen amount of time
        for(int i=0;i<blen;i++){
            if(c[i]=='D')
            {
                a=a+b[i];//append the i number character of string b to end of a
            }
            else
            {
                a=b[i]+a;//append the i number of character of string b to beginning of a
            }
        }

       cout<<a<<endl;
    }

    return 0;
}

