#include <bits/stdc++.h>
using namespace std;
void longMethod(int n) {
    if (n == 0) {
        cout << 0;
        return;
    }
    stack<int> s;
    while (n > 0) {
        s.push(n % 2);
        n /= 2;
    }
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
}
int main() {
    int n = 25;
    longMethod(n);
    return 0;
}