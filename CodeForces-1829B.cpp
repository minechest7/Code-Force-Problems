//https://codeforces.com/problemset/problem/1829/B
#include<iostream>
using namespace std;

int main()
{
    int test;//the number of test cases
    cin>>test;

    for(int t=0;t<test;t++)
    {
        int n;//the length of the array
        int maximum=0;//the length of the longest blank space
        cin>>n;

        int barray[n];//binary array of length n
        for(int i=0;i<n;i++)
        {
            cin>>barray[i];
        }

        int blank_space=0;//for counting how many 0 is contigiously in the array

        for(int i=0;i<n;i++)
        {

            if(barray[i]==0)
            {
                blank_space++;
            }
            if(blank_space>maximum)
            {
                maximum=blank_space;
            }
            if(barray[i]!=0)
            {
                blank_space=0;
            }
        }

        cout<< maximum<<endl;
    }
    return 0;
}
