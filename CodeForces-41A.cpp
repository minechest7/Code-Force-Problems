//https://codeforces.com/problemset/problem/41/A
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    string reverseword;

    cin>>word;
    cin>>reverseword;

    int rlength=reverseword.length();//the length of the reverse word

    int checker=1;

    //checking if the word string  is reversed
    if(rlength==word.length()){
    for(int i=0;i<rlength;i++)
    {
        if(word[i]!=reverseword[rlength-i-1])
        {
           cout<< "NO"<<endl;
           checker=0;
           break;
        }
    }

    if(checker==1)
    {
        cout<< "YES"<<endl;
    }

    }

    else{
        cout<< "NO"<<endl;
    }
    return 0;
}
