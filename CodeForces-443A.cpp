//https://codeforces.com/problemset/problem/443/A
#include <iostream>
#include <string>
using namespace std;

int main() {
    string setWord;
    getline(cin, setWord);

    string only = ""; // store only lowercase letters

    // Extract only lowercase letters
    for (int i = 1; i < setWord.length() - 1; i++) {
        if (setWord[i] >= 'a' && setWord[i] <= 'z') {
            only += setWord[i];
        }
    }

    // Remove duplicates manually
    for (int i = 0; i < only.length(); i++) {
        for (int j = i + 1; j < only.length(); j++) {
            if (only[i] == only[j]) {
                only.erase(j, 1);
                j--; // adjust index after erase
            }
        }
    }

    cout << only.length() << endl;
    return 0;
}
