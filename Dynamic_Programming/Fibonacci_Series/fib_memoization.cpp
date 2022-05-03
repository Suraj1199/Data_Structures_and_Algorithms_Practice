// Print Nth Fibonacci Number using Recursion and Memoization

#include <iostream>
#include <vector>
using namespace std;

long fib(int n, vector<long>& mem) {
    if (mem[n] != -1)
        return mem[n];
    if (n < 2)
        return mem[n] = 1;
    return mem[n] = fib(n - 1, mem) + fib(n - 2, mem);
}

int main() {
    cout << "\n Value of N = ";
    int n;
    cin >> n;
    vector<long> mem(n + 1, -1);
    cout << " The " << n << "th Fibonnaci number is " << fib(n, mem) << "\n\n";
    return 0;
}