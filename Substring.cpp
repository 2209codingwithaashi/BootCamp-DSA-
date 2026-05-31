#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int maxLen = 0;
    string longest = "";

    for (int i = 0; i < str.length(); i++) {
        string temp = "";

        for (int j = i; j < str.length(); j++) {
            bool repeat = false;

            for (int k = 0; k < temp.length(); k++) {
                if (temp[k] == str[j]) {
                    repeat = true;
                    break;
                }
            }

            if (repeat)
                break;

            temp += str[j];

            if (temp.length() > maxLen) {
                maxLen = temp.length();
                longest = temp;
            }
        }
    }

    cout << "Longest Substring = " << longest << endl;
    cout << "Length = " << maxLen;

    return 0;
}
