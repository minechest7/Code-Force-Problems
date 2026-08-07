//https://codeforces.com/problemset/problem/2254/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int groups = 1;

        // Number of groups before deletion
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                groups++;
        }

        int answer = groups;

        // Try deleting every character except first and last
        for (int i = 1; i < n - 1; i++)
        {
            int current = groups;

            // Remove the two boundaries involving s[i]
            if (s[i] != s[i - 1])
                current--;

            if (s[i] != s[i + 1])
                current--;

            // Add the new boundary created between s[i-1] and s[i+1]
            if (s[i - 1] != s[i + 1])
                current++;

            answer = min(answer, current);
        }

        cout << answer << '\n';
    }

    return 0;
}
