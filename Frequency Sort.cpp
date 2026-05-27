#include<iostream>
using namespace std;
int main() {
    int n, a[50], freq[50];
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        freq[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        if(freq[i] == -1)
            continue;
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
                freq[j] = -1;
            }
        }
        freq[i] = count;
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(freq[i] < freq[j]) {
                int temp = freq[i];
                freq[i] = freq[j];
                freq[j] = temp;

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "Frequency Sorted Array: ";
    for(int i = 0; i < n; i++) {
        if(freq[i] != -1) {
            for(int j = 0; j < freq[i]; j++) {
                cout << a[i] << " ";
            }
        }
    }
    return 0;
}
