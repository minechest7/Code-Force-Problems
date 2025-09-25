//https://codeforces.com/problemset/problem/136/A
#include<iostream>
using namespace std;

int main()
{

    int number;//number of friends invited to party
    cin>>number;

    int gift[number];
    //for checking who give gift to whom
    for(int i=0;i<number;i++)
    {
        cin>>gift[i];
    }
    //printing who recived gift from whom
    for(int i=0;i<number;i++)
    {
        for(int j=0;j<number;j++)
        {
            if(i+1==gift[j])
            {
                cout<<j+1<<" ";
            }
        }
    }
    return 0;
}
