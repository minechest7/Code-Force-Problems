//https://codeforces.com/problemset/problem/1760/A
#include<iostream>
using namespace std;

int main()
{
    int test;//the number of test cases;
    cin>>test;

    for(int t=0;t<test;t++)
    {
        int arr[3];
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }

        //using bubble sort to sort the array in ascending order
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<3-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }

            }
        }

        cout<<arr[1]<<endl;

    }
    return 0;
}
