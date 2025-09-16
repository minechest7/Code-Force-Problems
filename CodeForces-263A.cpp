//https://codeforces.com/problemset/problem/263/A
#include<iostream>
using namespace std;

int main()
{
    int matrix[5][5];

    int movecount=0;

    for(int i=0;i<5;i++)//rows
    {
        for(int j=0;j<5;j++)//columns
        {
            cin>>matrix[i][j];

            if(matrix[i][j]==1)
            {
                int column=abs(3-(j+1));
                int row=abs(3-(i+1));
                movecount=row+column;
            }
        }
    }

    cout<<movecount<<endl;

    return 0;
}
