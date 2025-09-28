//https://codeforces.com/problemset/problem/758/A
#include<iostream>
using namespace std;

int main()
{
    int n;//The number of citizen
    cin>>n;

    int burley[n];
    int highest=0;
    int gona=0;//for counting how many burley we have to spend



    //algorithm for founding out highest burley holder
    for(int i=0;i<n;i++)
    {
        cin>>burley[i];

        if(burley[i]>highest)
        {
            highest=burley[i];
        }
    }

     for(int i=0;i<n;i++)
    {
        if(burley[i]<highest)
        {
            gona=gona + (highest-burley[i]);
        }
    }

    cout<<gona<<endl;

    return 0;
}
