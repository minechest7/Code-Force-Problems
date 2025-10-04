//https://codeforces.com/problemset/problem/1722/A
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int test; // The number of test cases
    cin >> test;

    for(int t = 0; t < test; t++)
    {
        int n; // the length of the string s
        string s; // the name to check

        cin >> n;
        cin >> s;

        if(n != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            string name = "Timur";
            sort(s.begin(), s.end());
            sort(name.begin(), name.end());

            if(s == name)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
