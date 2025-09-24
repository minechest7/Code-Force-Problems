//https://codeforces.com/problemset/problem/705/A
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int layers;//layers of love and hate
    cin>>layers;

    for(int i=1;i<=layers;i++)
    {
        if(i%2==1)
        {
            cout<< "I hate ";
        }
        else
        {
            cout<< "I love ";
        }
        if(i==layers)
        {
            cout<< "it"<<endl;
        }
        else
        {
            cout<< "that ";
        }
    }
    return 0;
}
