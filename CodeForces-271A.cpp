//https://codeforces.com/problemset/problem/271/A
#include<iostream>
#include<string>
using namespace std;

bool hasDistinctDigits(int year);

int main()
{
    int number;
    cin>>number;

    while(true)
    {
        number++;
        if(hasDistinctDigits(number))
        {
            cout<<number<<endl;
            break;
        }

    }

    return 0;
}

bool hasDistinctDigits(int year)
{
    string num=to_string(year);

    for(int i=0;i<num.length();i++)
    {
        for(int j=i+1;j<num.length();j++)
        {
            if(num[i]==num[j])
            {
                return false;
            }
        }
    }
    return true;
}
