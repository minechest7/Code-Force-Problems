//https://codeforces.com/problemset/problem/732/A
#include<iostream>
using namespace std;

int main()
{
    int k;//the price of one shovel
    int r;//the one coin of specific value
    int numShovel;//the minimum number of shovel have to buy without change

    cin>>k>>r;

    for(int i=1;true;i++)
    {
        if((i*k)%10==0 || (i*k)%10==r)
        {
            numShovel=i;
            break;
        }
    }

    cout<<numShovel<<endl;

    return 0;
}
