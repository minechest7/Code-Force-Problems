//https://codeforces.com/problemset/problem/268/A
#include<iostream>
using namespace std;

int main()
{
    int number;//number of team playing in the tournament;

    int gona=0;//counting the number of times host team have to put on guest uniform;

    cin>>number;

    int home[number];//home uniform colour;
    int colour[number];//guest uniform colour;

    for(int i=0;i<number;i++)
    {
        cin>>home[i];
        cin>>colour[i];

    }

    //checking how many teams guest uniform matches with the others home uniform;
    for(int i=0;i<number;i++)
    {
        for(int j=0;j<number;j++)
        {
            if(home[i]==colour[j])
            {
                gona++;
            }
        }
    }

    cout<<gona<<endl;
    return 0;
}
