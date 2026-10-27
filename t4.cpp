#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Course {
    string name;
    int hours;
};

int main() {
    queue<Course> courses;

    courses.push({"Math", 15});
    courses.push({"Physics", 30});
    courses.push({"Chemistry", 40});
    courses.push({"History", 18});
    courses.push({"Informatics", 25});

    cout << "Курси з тривалістю від 20 до 40 годин:\n";

    while (!courses.empty()) {
        Course c = courses.front();
        courses.pop();

        if (c.hours >= 20 && c.hours <= 40) {
            cout << c.name << " - " << c.hours << " годин" << endl;
        }
    }

    return 0;
}
