//https://codeforces.com/problemset/problem/231/A
#include<iostream>
using namespace std;

int main()
{
    int num;//number of problems
    cin>>num;

    int vote[num][3];

    int pnum=0;//the number of problems they can solve

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>vote[i][j];
        }

    }
    //counting the vote
     for(int i=0;i<num;i++)
    {   int  k=0;
        for(int j=0;j<3;j++)
        {
            k+=vote[i][j];
        }
        if(k>=2)
        {
            pnum++;
        }
    }

    cout<<pnum<<endl;

    return 0;
}
