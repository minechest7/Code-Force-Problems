//https://codeforces.com/problemset/problem/977/A
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int number;
    int numberOperation;

    cin>>number>>numberOperation;

    for(int i=1;i<=numberOperation;i++)
    {
        if(number%10==0)
        {
            number=number/10;
        }
        else
        {
            number--;
        }
    }

    cout<<number<<endl;

    return 0;
}
