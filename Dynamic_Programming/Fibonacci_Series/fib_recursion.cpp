// Print Nth Fibonacci Number using Recursion only

#include <iostream>
#include <vector>
using namespace std;

int fib(int n) {
    if (n < 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
int main() {
    cout << "\n Value of N = ";
    int n;
    cin >> n;
    cout << " The " << n << "th Fibonnaci number is " << fib(n) << "\n\n";
    return 0;
}