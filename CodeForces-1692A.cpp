//https://codeforces.com/problemset/problem/1692/A
#include<iostream>
using namespace std;

int main()
{
    int test;//the number of test cases
    cin>>test;

    int gona;//the number of peapole in front of timur

    for(int i=0;i<test;i++)
    {
        int Distance[4]={0,0,0,0};

        gona=0;//the number of peapole in front of timur

        for(int j=0;j<4;j++)
        {
            cin>>Distance[j];
        }
        //for counting how many people are in front of timur
        for(int j=1;j<4;j++)
        {
            if(Distance[j]>Distance[0])
            {
                gona++;
            }
        }

        cout<<gona<<endl;

    }

    return 0;
}
