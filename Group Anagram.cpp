#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<string, vector<string> > mp;

    for (int i = 0; i < n; i++) {
        string temp = arr[i];
        sort(temp.begin(), temp.end());

        mp[temp].push_back(arr[i]);
    }

    for (auto it = mp.begin(); it != mp.end(); it++) {

        vector<string> v = it->second;

        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
