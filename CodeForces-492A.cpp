//https://codeforces.com/problemset/problem/492/A
#include<iostream>
using namespace std;

int main()
{
    int cube;
    cin>>cube;//the number of cubes vanya has;

    int sum=0;//keeps track of how many cubes used so far
    int iit=1;//height of the pyramid

    while(true)
    {
        int pum=0;//keeps track how many pyramid we need in this level

        for(int i=1;i<=iit;i++)
        {
            pum+=i;
        }
        if((sum+pum)<=cube)
        {
            sum=sum+pum;
        }
        else
        {
            break;
        }

        iit++;

    }


    cout<<iit-1<<endl;

    return 0;
}
