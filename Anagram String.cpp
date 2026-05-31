#include<iostream>
using namespace std;
int main()
{
	string s1, s2;
	cout<<"Enter First and Second String : "<<endl;
    cin >> s1 >> s2;

    if (s1.length() != s2.length()) {
        cout << "Not Anagram";
        return 0;
    }

    int freq[26] = {0};

    for (int i = 0; i < s1.length(); i++) {
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";

    return 0;
}
