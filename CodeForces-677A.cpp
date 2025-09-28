//https://codeforces.com/problemset/problem/677/A
#include<iostream>
using namespace std;

int main()
{
    int n,h;//the number of friends and height of the fence
    cin>>n>>h;

    int gona=0;//for counting how many people have to bend

    int heights[n];

    for(int i=0;i<n;i++)
    {
        cin>>heights[i];

        if(heights[i]>h)
        {
            gona++;
        }
    }

    cout<<(gona*2)+((n-gona)*1)<<endl;

    return 0;
}
