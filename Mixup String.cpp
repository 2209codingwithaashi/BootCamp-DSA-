#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            int num = s[i] - '0';

            i += 2; 

            char ch = s[i];

            for (int j = 0; j < num; j++) {
                result += ch;
            }

            i++;
        }
    }

    cout << result;

    return 0;
}
