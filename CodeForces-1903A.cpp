#include<iostream>
using namespace std;

bool reverseCheck(int *arr,int arrSize);

int main()
{
    int test;//number of test cases
    cin>>test;

    for(int t=0;t<test;t++)
    {
        int n;//number of boxes
        int k;//the maximum length of the subarray that can be reversed

        cin>>n>>k;

        int box[n];
        for(int i=0;i<n;i++)
        {
            cin>>box[i];
        }

        if(reverseCheck(box,n))
        {
            cout<< "YES"<<endl;
        }
        else if(k==1 && n>1)
        {
            cout<< "NO"<<endl;
        }
        else
        {
            cout<< "YES"<<endl;
        }
    }
    return 0;
}

bool reverseCheck(int *arr,int arrSize)
{
    bool ascending=true;
    for(int i=0;i<arrSize-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            ascending=false;
            break;
        }
    }
    return ascending;
}
