//https://codeforces.com/problemset/problem/734/A
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;//the number of chess matches played
    cin>>n;


    char games[n];

    int anton=0;
    int darik=0;

    for(int i=0;i<n;i++)
    {
        cin>>games[i];

        if(games[i]=='A')
        {
            anton++;
        }
        else
        {
            darik++;
        }
    }

    if(anton>darik)
    {
        cout<< "Anton"<<endl;
    }
    else if(darik>anton)
    {
        cout<< "Danik"<<endl;
    }
    else
    {
        cout<< "Friendship"<<endl;
    }

    return 0;
}
