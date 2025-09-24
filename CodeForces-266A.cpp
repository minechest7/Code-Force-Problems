//https://codeforces.com/problemset/problem/266/A
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int numberStone;
    cin>>numberStone;

    char stone[numberStone];

    int gona=0;//for counting the number of stones to take

    for(int i=0;i<numberStone;i++)
    {
        cin>>stone[i];

        if(i!=0 && stone[i]==stone[i-1])
        {
            gona++;
        }

    }

    cout<<gona<<endl;

    return 0;
}
