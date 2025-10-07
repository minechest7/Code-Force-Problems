//https://codeforces.com/problemset/problem/1535/A
#include<iostream>
using namespace std;

int main()
{
    int test;//the number of test cases
    cin>>test;

    for(int t=0;t<test;t++)
    {
        int skill[4];
        int max1;//for storing the maximum value between player 1 and 2
        int min1;//for storing the minimum value between player 1 and 2
        int max2;//for storing the maximum value between player 3 and 4
        int min2;//for storing the minimum value between player 3 and 4

        for(int i=0;i<4;i++)
        {
            cin>>skill[i];
        }

        max1=max(skill[0],skill[1]);
        min1=min(skill[0],skill[1]);
        min2=min(skill[2],skill[3]);
        max2=max(skill[2],skill[3]);

        if(max1<min2||max2<min1)
        {
            cout<< "NO"<<endl;
        }

        else
        {
            cout<< "YES"<<endl;
        }

    }

    return 0;
}


