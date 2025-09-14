//https://codeforces.com/problemset/problem/155/A
#include<iostream>
using namespace std;

int main()
{
    int number;//the number of contest the coder perticipated in
    cin>>number;

    int points[number];//number of points earned in each contest

    int amazingPerformance=0;

    int mavalue;//maximum value of points at the contest in given time
    int mivalue;//minimum value of points at the contest in given time

    //counting the number of amazing performances
    for(int i=0;i<number;i++)
    {
        cin>>points[i];
        if(i==0)
        {
        mavalue=points[i];
        mivalue=points[i];
        }


        if(i!=0)
        {
            for(int j=0;j<=i;j++)
            {

                if(points[j]>mavalue)
                {
                    amazingPerformance++;
                    mavalue=points[j];
                }

            else if(points[j]<mivalue)
                {
                    amazingPerformance++;
                    mivalue=points[j];
                }
            }
        }

    }

    cout<<amazingPerformance<<endl;

    return 0;
}

