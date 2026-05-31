#include <iostream>
#include <string>
using namespace std;

bool containsAll(string sub, string t) {
    int freq[256] = {0};

    for (int i = 0; i < sub.length(); i++)
        freq[sub[i]]++;

    for (int i = 0; i < t.length(); i++) {
        if (freq[t[i]] == 0)
            return false;
        freq[t[i]]--;
    }

    return true;
}

int main() {
    string s, t;
    cin >> s >> t;

    string ans = "";

    for (int i = 0; i < s.length(); i++) {
        for (int j = i; j < s.length(); j++) {

            string sub = s.substr(i, j - i + 1);

            if (containsAll(sub, t)) {

                if (ans == "" || sub.length() < ans.length())
                    ans = sub;
            }
        }
    }

    if (ans == "")
        cout << "No window found";
    else
        cout << "Minimum Window = " << ans;

    return 0;
}
