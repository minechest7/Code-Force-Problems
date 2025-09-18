//https://codeforces.com/problemset/problem/59/A
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void toUpper(string s);
void toLower(string s);

int main()
{
    string s;
    cin>>s;

    int strlength=s.length();

    int lowerCase=0;
    int upperCase=0;
    //counting how many upper case and lowercase is in the string
    for(int i=0;i<strlength;i++)
    {
        if(islower(s[i]))
        {
            lowerCase++;
        }
        else
        {
            upperCase++;
        }
    }

    if(lowerCase>upperCase)
    {
        toLower(s);
    }
    if(lowerCase<upperCase)
    {
        toUpper(s);
    }
    if(lowerCase==upperCase)
    {
        toLower(s);
    }

    return 0;
}

void toUpper(string s)
{
    for(int i=0;i<s.length();i++)
    {
        s[i]=toupper(s[i]);
    }

    cout<<s<<endl;
}
void toLower(string s)
{
    for(int i=0;i<s.length();i++)
    {
        s[i]=tolower(s[i]);
    }

    cout<<s<<endl;
}
