#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int curr = 1, maxLen = 1;
    int endIndex = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i - 1] + 1)
            curr++;
        else
            curr = 1;

        if(curr > maxLen) {
            maxLen = curr;
            endIndex = i;
        }
    }

    cout << "Longest Consecutive Increasing Subarray: ";

    for(int i = endIndex - maxLen + 1; i <= endIndex; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nLength = " << maxLen;

    return 0;
}
