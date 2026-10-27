#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> numbers;

    numbers.push(5);
    numbers.push(12);
    numbers.push(8);
    numbers.push(3);
    numbers.push(15);
    numbers.push(8);
    numbers.push(20);
    numbers.push(5);
    numbers.push(7);
    numbers.push(14);
    numbers.push(9);
    numbers.push(6);
    numbers.push(11);
    numbers.push(4);
    numbers.push(13);
    numbers.push(5);

    int firstVal = numbers.front();
    int lastVal = numbers.back();

    int count = 0;

    queue<int> temp = numbers;
    while (!temp.empty()) {
        int x = temp.front();
        temp.pop();

        if (x == firstVal || x == lastVal) {
            count++;
        }
    }

    cout << "Кількість елементів, що дорівнюють першому або останньому: " << count << endl;

    return 0;
}
