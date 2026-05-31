#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout<<"Enter a string: ";
    cin >> s;

    int start = 0;
    int maxLen = 1;

    for (int i = 0; i < s.length(); i++) {
        int left = i, right = i;

        while (left >= 0 && right < s.length() &&
               s[left] == s[right]) {

            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }

            left--;
            right++;
        }
        left = i;
        right = i + 1;

        while (left >= 0 && right < s.length() &&
               s[left] == s[right]) {

            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }

            left--;
            right++;
        }
    }

    cout << "Longest Palindrome = "<< s.substr(start, maxLen) << endl;

    cout << "Length = " << maxLen;

    return 0;
}
