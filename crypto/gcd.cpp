#include <iostream>
using namespace std;

// Function to implement the extended Euclidean algorithm
int extendedEuclidean(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int gcd = extendedEuclidean(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

// Main function to test the extended Euclidean algorithm
int main() {
    int a, b, x, y;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int gcd = extendedEuclidean(a, b, x, y);
    cout << "GCD(" << a << ", " << b << ") = " << gcd << endl;
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}