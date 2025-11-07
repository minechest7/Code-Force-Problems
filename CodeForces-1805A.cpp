//https://codeforces.com/problemset/problem/1850/A
#include<iostream>
using namespace std;

void bubbleSort(int *arr)
{
    //sorting in descending order
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int test;//the number of test cases
    cin>>test;

    for(int t=1;t<=test;t++)
    {
        int digits[3];
        for(int i=0;i<3;i++)
        {
            cin>>digits[i];
        }
        
        bubbleSort(digits);
        
        if(digits[0]+digits[1]>=10)
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
