#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1000000;
vector<bool> is_prime(MAX + 1, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void process_input(int n) {
    bool found = false;
    for (int a = 3; a <= n / 2; a += 2) {
        if (is_prime[a] && is_prime[n - a]) {
            cout << n << " = " << a << " + " << (n - a) << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Goldbach's conjecture is wrong." << endl;
    }
}

int main() {
    sieve();
    
    int n;
    while (cin >> n && n != 0) {
        process_input(n);
    }

    return 0;
}
