//https://codeforces.com/problemset/problem/236/A
#include<iostream>
#include<string>
using namespace std;

int main()
{

    string name;
    cin>>name;
  
    //algorithm for erasing distinct characters from a string
    for(int i=0;i<name.length();i++)
    {
        for(int j=i+1;j<name.length();j++)
        {
            if(name[i]==name[j])
            {
                name.erase(j,1);
                j--;
            }
        }
    }

    if(name.length()%2 == 1)
    {
        cout<< "IGNORE HIM!"<<endl;
    }
    else
    {
        cout<< "CHAT WITH HER!"<<endl;
    }


    return 0;
}
