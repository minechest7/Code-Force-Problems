//https://codeforces.com/problemset/problem/791/A
#include<iostream>
using namespace std;

int main()
{
    int a,b;//weights of the bear
    cin>>a>>b;

    int gona=0;//for counting how many years it will take

    while(a<=b)
    {
        gona++;

        a=a*3;
        b=b*2;

    }

    cout<<gona<<endl;

    return 0;
}
