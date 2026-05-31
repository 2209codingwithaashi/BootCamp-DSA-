#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);

    string res = "";

    for (int i = 0; i < str.length(); i++) {
        bool duplicate = false;

        for (int j = 0; j < res.length(); j++) {
            if (str[i] == res[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            res += str[i];
        }
    }

    cout << "String after removing duplicates: " << res;

    return 0;
}
