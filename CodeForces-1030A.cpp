//https://codeforces.com/problemset/problem/1030/A
#include<iostream>
using namespace std;

int main()
{
    int people;
    cin>>people;
    
    int x;
    int y=0;
    for(int i=1;i<=people;i++)
    {
        cin>>x;
        y=y+x;
    }
    if(y==1)
    {
        cout<< "HARD"<<endl;
    }
    else
    {
        cout<< "EASY"<<endl;
    }
    
    return 0;
}
