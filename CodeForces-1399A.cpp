//https://codeforces.com/problemset/problem/1399/A
#include<iostream>
using namespace std;

void selectionSort(int *arr,int n);

int main()
{
    int test;//the number of test cases
    cin>>test;

    for(int t=0;t<test;t++)
    {
        int n;//the size of array
        bool possible=true;//possible to obtain the targeted array
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        selectionSort(arr,n);

        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]>1)
            {
                possible=false;
            }
        }
        if(possible==true)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
    return 0;
}

void selectionSort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

