#include <iostream>
#include <queue>
#include <stack>

using std::cin;
using std::cout;

long long Div(long long a) {
    while (a % 2 == 0)
        a /= 2;
    while (a % 3 == 0)
        a /= 3;
    while (a % 5 == 0)
        a /= 5;
    return a;
}

int main() {
    long long a = 2, count = 0, n;
    std::queue <int> out;
    cin >> n;
    while (count < n) {
        if (Div(a) == 1) {
            out.push(a);
            ++count;
        }
        ++a;
    }

    for (int i = 0; i < count; i++) {
        cout << out.front() << " ";
        out.pop();
    }

    return 0;

}