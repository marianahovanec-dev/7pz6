#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<char> letters;
    string text = "aaabbccccddeeaaa";

    for (int i = 0; i < text.length(); i++) {
        letters.push(text[i]);
    }

    int maxLen = 0;
    int currentLen = 0;
    char prevChar = '\0';

    while (!letters.empty()) {
        char x = letters.front();
        letters.pop();

        if (x == prevChar) {
            currentLen++;
        } else {
            currentLen = 1;
            prevChar = x;
        }

        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    cout << "Довжина найбільшої послідовності: " << maxLen << endl;

    return 0;
}
