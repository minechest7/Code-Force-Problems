//https://codeforces.com/problemset/problem/469/A
#include<iostream>
#include<vector>
using namespace std;

void insertElement(vector<int>*a,int b);

int main()
{
    int n;//the number of levels they have to pass
    int p;//the number of levels mr x can pass
    int q;//the number of levels mr y can pass
    vector<int>combined;//the combined levels that mr x and y can pass together
    //bool clearGame=false;//the state if mr x and y can together clear the whole game

    cin>>n;

    cin>>p;
    int arr1[p];

    for(int i=0;i<p;i++)//the levels that mr x can pass
    {
        cin>>arr1[i];
        insertElement(&combined,arr1[i]);
    }

    cin>>q;
    int arr2[q];
    for(int i=0;i<q;i++)//the levels that mr y can pass
    {
        cin>>arr2[i];
        insertElement(&combined,arr2[i]);

    }

    bool present;
    for(int i=1;i<=n;i++)//searches the entire vector and check if 1 to n number is present in it
    {
         present=false;
        for(int j=0;j<combined.size();j++)
        {
            if(combined.at(j)==i)
            {
                present=true;
                break;
            }
        }
        if(present==false)
        {
            cout<< "Oh, my keyboard!"<<endl;
            break;
        }
    }
    if(present==true)
    {
        cout<< "I become the guy."<<endl;
    }

    return 0;
}

void insertElement(vector<int>*a,int b)
{
    (*a).push_back(b);
}
