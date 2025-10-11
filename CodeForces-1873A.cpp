//https://codeforces.com/problemset/problem/1873/A
#include<iostream>
#include<string>
using namespace std;

int main()
{

    int test;//the number of test cases
    cin>>test;

    for(int t=0;t<test;t++)
    {
      string row;
      cin>>row;

      if(row[0]=='a'|| row[1]=='b'|| row[2]=='c')
      {
          cout<< "YES" <<endl;
      }
      else
      {
          cout<< "NO" <<endl;
      }
    }


    return 0;
}
