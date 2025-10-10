//https://codeforces.com/problemset/problem/469/A
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int n; // highest level(1 to n)
    int p; // total number of level p can pass
    int q; // total number of level q can pass

    cin >> n >> p;

    int pLevels[p]; // the levels p can pass
    for (int i = 0; i < p; i++) // initializing pLevels array
    {
        cin >> pLevels[i];
    }

    cin >> q;

    int qLevels[q]; // the levels q can pass
    for (int i = 0; i < q; i++) // initializing qLevels array
    {
        cin >> qLevels[i];
    }

    set<int> totaLevels; // the total number of levels p and q can pass

    for (int i = 0; i < p; i++) // inserting pLevels elements to the set
    {
        int x = pLevels[i];
        totaLevels.insert(x);
    }

    for (int i = 0; i < q; i++) // inserting qLevels elements to the set
    {
        int x = qLevels[i];
        totaLevels.insert(x);
    }

    // checking if all the levels required to pass exists in the set
    bool pass = true;

    for (int i = 1; i <= n; i++)
    {
        if (totaLevels.count(i) == 0)
        {
            pass = false;
            break;
        }
    }

    if (pass)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}
