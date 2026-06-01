#include <iostream>
using namespace std;

int main() {
    int r, c, pos;

    cin >> r >> c;

    int arr[20][20];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    cin >> pos;   
    for(int i = 0; i < r; i++) {
        for(int j = c; j > pos; j--) {
            arr[i][j] = arr[i][j - 1];
        }
    }
    for(int i = 0; i < r; i++) {
        cin >> arr[i][pos];
    }

    c++;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
