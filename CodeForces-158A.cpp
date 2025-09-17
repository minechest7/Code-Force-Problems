//https://codeforces.com/problemset/problem/158/A
#include<iostream>
using namespace std;

int main()
{
    int n;//the number of participants
    int k;
    int gona=0;//for counting the number of participants going to next round

    cin>>n>>k;

    int scores[n];

    for(int i=0;i<n;i++)
    {
        cin>>scores[i];
    }

    for(int i=0;i<n;i++)
    {
        if(scores[i]>0 && scores[i]>=scores[k-1])
        {
            gona++;
        }
    }

    cout<<gona<<endl;

    return 0;
}
