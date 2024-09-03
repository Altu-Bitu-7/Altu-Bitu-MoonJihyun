#include <iostream>
using namespace std;

// 유클리드 호제법을 이용해 최대공약수(GCD) 구하기
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    // 두 분수의 합 계산
    int numerator = a1 * b2 + a2 * b1;  // 분자
    int denominator = b1 * b2;          // 분모

    // 기약분수로 만들기 위해 최대공약수 구하기
    int g = gcd(numerator, denominator);

    // 기약분수로 변환
    numerator /= g;
    denominator /= g;

    // 결과 출력
    cout << numerator << " " << denominator << endl;

    return 0;
}
