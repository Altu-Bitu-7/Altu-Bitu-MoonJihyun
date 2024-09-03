#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n = 8;  // 바퀴 칸의 수 (고정된 값)
    int k;      // 회전 수
    cin >> k;

    vector<char> wheel = {'N', 'I', 'T', 'A', 'V', 'R', 'H', 'O'};
    int current_position = 0; 

    bool is_valid = true;

    for (int i = 0; i < k; i++) {
        int s;
        char letter;
        cin >> s >> letter;

        current_position = (current_position - s + n) % n; // 새로운 위치 계산

        if (wheel[current_position] != letter) {
            is_valid = false;
            break;
        }
    }

    if (!is_valid) {
        cout << "!" << endl;
    } else {
        for (int i = 0; i < n; i++) {
            cout << wheel[(current_position + i) % n];
        }
        cout << endl;
    }

    return 0;
}
