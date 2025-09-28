//https://codeforces.com/problemset/problem/344/A
#include<iostream>
using namespace std;

int main()
{
    int number;//number of magnets
    cin>>number;

    int magnets[number];

    int gona=0;//for counting the number of groups

    for(int i=0;i<number;i++)
    {
        cin>>magnets[i];

    }

    for(int i=0;i<number;i++)
    {
        if(i==number-1)
        {
                gona++;
        }

        else if(magnets[i]!=magnets[i+1])
        {
            gona++;
        }

    }

    cout<<gona<<endl;

    return 0;
}
