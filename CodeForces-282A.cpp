//https://codeforces.com/problemset/problem/282/A
#include<iostream>
using namespace std;

int main()
{
    int n;//the number of statements
    cin>>n;

    string operation;

    int x=0;

    for(int i=0;i<n;i++)
    {
        cin>>operation;

        if(operation=="++X"||operation=="X++")
        {
            x++;
        }

        if(operation=="--X"||operation=="X--")
        {
            x--;
        }
    }

    cout<<x<<endl;

    return 0;
}
