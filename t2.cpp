#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> source;
    queue<int> result;

    for (int i = 1; i <= 200; i++) {
        source.push(i);
    }

    while (!source.empty()) {
        int x = source.front();
        source.pop();

        int sum = 0;
        int temp = x;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum > 10) {
            result.push(x);
        }
    }

    cout << "Числа, сума цифр яких більша за 10: ";

    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }

    cout << endl;

    return 0;
}
