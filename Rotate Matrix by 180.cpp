#include<iostream>
using namespace std;

int main() {
    int n, a[50][50];
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: "<<endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n / 2; i++) {
        for(int j = 0; j < n; j++) {
            int temp = a[i][j];
            a[i][j] = a[n - i - 1][j];
            a[n - i - 1][j] = temp;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n / 2; j++) {
            int temp = a[i][j];
            a[i][j] = a[i][n - j - 1];
            a[i][n - j - 1] = temp;
        }
    }
    cout << "Matrix after rotation: "<<endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
