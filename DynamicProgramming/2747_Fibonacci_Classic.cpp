#include <iostream>
using namespace std;

//problem from https://www.acmicpc.net/problem/2747

int memo[50];
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else if (memo[n] != 0) {
        return memo[n];
    } else {
        return memo[n] = fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << '\n';
    return 0;
}