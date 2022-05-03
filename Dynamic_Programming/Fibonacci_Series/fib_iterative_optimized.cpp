// Print Nth Fibonacci Number (Space Optimised Iterative Using only two Variables)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "\n Value of N = ";
    int n;
    cin >> n;
    long a = 1, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << " The " << n << "th Fibonnaci number is " << b << "\n\n";
    return 0;
}