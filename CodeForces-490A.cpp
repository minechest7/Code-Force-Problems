//https://codeforces.com/problemset/problem/490/A
#include<iostream>
#include<cstdio>
using namespace std;

int maxTeamCounter(int *arr,int arrSize);

int main()
{
    int n;//the number of children in the school
    int w;//the maximum number of team possible
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    w=maxTeamCounter(arr,n);
    if(w==0)
    {
        cout<<w<<endl;
    }
    else
    {
        cout<<w<<endl;
        for(int i=0;i<w;i++)
        {
             int n1,n2,n3;
             for(int j=0;j<n;j++)
             {
                 if(arr[j]==1)
                 {
                     n1=j+1;
                 }
                 if(arr[j]==2)
                 {
                     n2=j+1;
                 }
                 if(arr[j]==3)
                 {
                     n3=j+1;
                 }
             }

             arr[n1-1]=0;
             arr[n2-1]=0;
             arr[n3-1]=0;

             printf("%d %d %d\n",n1,n2,n3);
        }
    }

    return 0;
}

int maxTeamCounter(int *arr,int arrSize)
{
    int numberCounter[3]={0,0,0};
    int minimumNumber;

    for(int i=0;i<arrSize;i++)
    {
        if(arr[i]==1)
        {
            numberCounter[0]++;
        }
        if(arr[i]==2)
        {
            numberCounter[1]++;
        }
        if(arr[i]==3)
        {
            numberCounter[2]++;
        }

    }

    minimumNumber=min(numberCounter[0],min(numberCounter[1],numberCounter[2]));

    return minimumNumber;
}
