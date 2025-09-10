//https://codeforces.com/problemset/problem/2131/A
#include<iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for(int t = 1; t <= test; t++)
    {
        int n; // array size
        cin >> n;

        int a[n];
        int b[n];

        // initializing array a
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // initializing array b
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int inum = 0; // number of iterations the lever does

        // counting all (a[i] - b[i]) where a[i] > b[i]
        for(int i = 0; i < n; i++)
        {
            if(a[i] > b[i])
            {
                inum += (a[i] - b[i]);
            }
        }
        
        //extra because the problem asks for it
        inum++;

        cout << inum << endl;
    }

    return 0;
}
