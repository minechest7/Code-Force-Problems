//https://codeforces.com/problemset/problem/427/A
#include<iostream>
using namespace std;

int main()
{
    int n;//the number of events
    int hire=0;//the number of police officer available
    int untreated=0;//the number of crime that will go untreated

    cin>>n;

    int arr[n];//crime an hire number
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==-1 && hire==0)
        {
            untreated++;

        }
        if(arr[i]==-1 && hire>0)
        {
            hire--;
        }
        if(arr[i]!=-1)
        {
            hire+=arr[i];
        }
    }

    cout<<untreated<<endl;

    return 0;
}
