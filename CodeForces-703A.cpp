//https://codeforces.com/problemset/problem/703/A
#include<iostream>
using namespace std;

int main()
{
    int n;//the number of matches
    cin>>n;

    int mishkaWins=0;//the number of matches won by mishka
    int chrisWins=0;//the number of matches won by chris

    int a,b;//mishka and chris dice number

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            mishkaWins++;
        }
        if(a<b)
        {
            chrisWins++;
        }
    }

    if(mishkaWins>chrisWins)
    {
        cout<< "Mishka"<<endl;
    }
    else if(mishkaWins<chrisWins)
    {
        cout<< "Chris"<<endl;
    }
    else
    {
        cout<< "Friendship is magic!^^"<<endl;
    }
    return 0;
}
