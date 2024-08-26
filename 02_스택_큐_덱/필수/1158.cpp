#include <iostream>
#include <list>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    list<int> people;
    for (int i = 1; i <= N; ++i) {
        people.push_back(i);
    }

    auto it = people.begin();
    cout << "<";

    while (!people.empty()) {
        for (int i = 1; i < K; ++i) {
            ++it;
            if (it == people.end()) it = people.begin();
        }
        cout << *it;
        it = people.erase(it);
        if (it == people.end()) it = people.begin();
        
        if (!people.empty()) {
            cout << ", ";
        }
    }

    cout << ">" << endl;

    return 0;
}
