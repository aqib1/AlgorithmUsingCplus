//
// Created by Aqib Javed on 03/01/2025.
//
#include "iostream"

using namespace std;

// Time complexity O(n)
// Space complexity OLog(n)
int pow(const int a, const int pow) {
    int x = a;
    for (int i = 2; i <= pow; i++) {
        x *= a;
    }
    return x;
}


// Using Binary exponentiation algorithm
// Time complexity OLog(n)
// Space complexity O(1)
double binaryExponentiation(const int a, const long pow) {
    if (pow == 0)
        return 1;
    if (pow == 1)
        return a;
    if (pow < 0)
        return 1 / binaryExponentiation(a, -pow);
    if (pow % 2 == 0)
        return binaryExponentiation(a * a, pow / 2);
    return a * binaryExponentiation(a * a, (pow - 1) / 2);
}

// time complexity OLog(n)
// space complexity O(1)
double pingalaPower(
    const int a,
    const long pow
) {
    if (pow == 0)
        return 1;
    if (pow == 1)
        return a;
    if (pow < 0)
        return 1 / pingalaPower(a, -pow);

    const int x = pingalaPower(a, pow / 2);
    if (pow % 2 == 0)
        return x * x;
    return x * x * a;
}


int main() {
    cout << "This is a test" << endl;
    cout << "pow(2, 4) = " << pow(2, 4) << endl;
    cout << "pow(2, 4) = " << binaryExponentiation(2, 4) << endl;
    cout << "pow(2, 4) = " << pingalaPower(2, 4) << endl;
}
