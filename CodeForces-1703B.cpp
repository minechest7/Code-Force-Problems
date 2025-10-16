//https://codeforces.com/problemset/problem/1703/B
#include <iostream>
#include <string>
using namespace std;

int main() {
    int test;
    cin >> test;

    for (int t = 0; t < test; t++) {
        int strlen;
        string problems;
        cin >> strlen >> problems;

        string unique = ""; // will store seen characters
        int time = 0;       // total time

        for (int i = 0; i < strlen; i++) {
            bool found = false;

            // check if this balloon type already appeared
            for (int j = 0; j < unique.size(); j++) {
                if (problems[i] == unique[j]) {
                    found = true;
                    break;
                }
            }

            if (found)
                time += 1; // already seen
            else {
                time += 2; // first time
                unique += problems[i]; // mark as seen
            }
        }

        cout << time << endl;
    }

    return 0;
}
