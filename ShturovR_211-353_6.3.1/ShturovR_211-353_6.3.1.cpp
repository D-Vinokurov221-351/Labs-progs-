#include <iostream>
#include <queue>
#include <stack>

using std::cin;
using std::cout;

long long Div(long long a){
    bool flag = 0;
    long long b = a;
    int abc[8] = { 7,11,13,17,19,21,27,29 };
    do { b /= 30; } while (b / 30 > 30);
    for (int i = 0; i < 8; i++) {
        if (abc[i] == b) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) return 0;
    return a;
}

int main() {
    long long a = 30, count = 0, n;
    std::queue <int> out;
    cin >> n;
    while (count < n) {
        if (Div(a) != 0) {
            out.push(a);
            ++count;
        }
        a+=30;
    }

    for (int i = 0; i < count; i++) {
        cout << out.front() << " ";
        out.pop();
    }

    return 0;

}