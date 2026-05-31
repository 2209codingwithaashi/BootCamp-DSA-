#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    string str[n];

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    string prefix = str[0];

    for (int i = 1; i < n; i++) {
        while (str[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);

            if (prefix.empty()) {
                cout << "No common prefix";
                return 0;
            }
        }
    }

    cout << "Longest Common Prefix: " << prefix;

    return 0;
}
