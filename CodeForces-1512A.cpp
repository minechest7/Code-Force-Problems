//https://codeforces.com/problemset/problem/1512/A
#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;

    for (int i = 1; i <= test; i++) {
        int arrSize;
        cin >> arrSize;

        int arr[arrSize];
        for (int j = 0; j < arrSize; j++) {
            cin >> arr[j];
        }

        int index = -1;

        // find the unique element
        for (int j = 0; j < arrSize; j++) {
            bool distinct = true;

            for (int k = 0; k < arrSize; k++) {
                if (k == j) continue;
                if (arr[j] == arr[k]) {
                    distinct = false;
                    break; // no need to check further
                }
            }

            if (distinct) {
                index = j;
                break; // found the unique one
            }
        }

        cout << index + 1 << endl; // 1-based index
    }

    return 0;
}
