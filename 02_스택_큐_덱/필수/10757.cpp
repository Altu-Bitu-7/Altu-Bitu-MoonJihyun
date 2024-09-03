#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addLargeNumbers(string a, string b) {
    string result = "";
    int carry = 0; 

    while (a.length() < b.length()) a = '0' + a;
    while (b.length() < a.length()) b = '0' + b;

    for (int i = a.length() - 1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        carry = sum / 10; 
        result += (sum % 10) + '0'; 
    }

    if (carry > 0) {
        result += carry + '0';
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    string A, B;
    cin >> A >> B;

    cout << addLargeNumbers(A, B) << endl;

    return 0;
}
