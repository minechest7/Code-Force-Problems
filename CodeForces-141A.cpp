//https://codeforces.com/problemset/problem/141/A
#include<iostream>
#include<string>
using namespace std;

void stringSorter(string &a);

int main()
{
    string guestName;
    string hostName;
    string totalCharacter;//guestName+hostName;
    string pile;

    cin>>guestName>>hostName>>pile;

    totalCharacter=guestName+hostName;

    if(pile.length()!=totalCharacter.length())
    {
        cout<< "NO"<<endl;
    }

    else
    {
       stringSorter(totalCharacter);
       stringSorter(pile);
       
       if(totalCharacter==pile)
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

void stringSorter(string &a)
{
    //bubble sort
    for(int i=0;i<a.length()-1;i++)
    {
        for(int j=0;j<a.length()-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
