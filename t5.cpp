#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Parcel {
    int number;
    string destination;
};

int main() {
    queue<Parcel> parcels;

    parcels.push({1, "Kyiv"});
    parcels.push({2, "Lviv"});
    parcels.push({3, "Odesa"});
    parcels.push({4, "Kharkiv"});
    parcels.push({5, "Dnipro"});
    parcels.push({6, "Vinnytsia"});

    parcels.pop();
    parcels.pop();

    cout << "Решта посилок у черзі:\n";

    while (!parcels.empty()) {
        Parcel p = parcels.front();
        parcels.pop();

        cout << "Номер: " << p.number << ", Пункт призначення: " << p.destination << endl;
    }

    return 0;
}
