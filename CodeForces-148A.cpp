//https://codeforces.com/problemset/problem/148/A
#include<iostream>
using namespace std;

int main()
{
    int dragons[5];//the number of dragons
    for(int i=0;i<5;i++)
    {
        cin>>dragons[i];
    }

    int gona=0;//for counting the damaged dragons

    //calculating the number of damaged dragons
    for(int i=1;i<=dragons[4];i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i%dragons[j]==0)
            {
                gona++;
                break;
            }
        }
    }

    cout<<gona<<endl;

    return 0;
}
