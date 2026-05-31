#include <iostream>
using namespace std;

void generate(string str, int open, int close, int n) {

    if (str.length() == 2 * n) {
        cout << str << endl;
        return;
    }

    if (open < n)
        generate(str + "(", open + 1, close, n);

    if (close < open)
        generate(str + ")", open, close + 1, n);
}

int main() {
    int n;
    cin >> n;

    generate("", 0, 0, n);

    return 0;
}
