#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    int n;

    cin >> s;
    cin >> n;
    string rotated = s.substr(n) + s.substr(0, n);
    for (int i = 0; i < n - 1 && i < rotated.length(); i++) {
        rotated[i] = toupper(rotated[i]);
    }
    rotated[rotated.length() - 1] =
        toupper(rotated[rotated.length() - 1]);

    cout << rotated;

    return 0;
}
