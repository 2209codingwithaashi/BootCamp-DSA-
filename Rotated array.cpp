#include<iostream>
using namespace std;

int main() {

    int n, mat[50][50];

    cout << "Enter the size of matrix: ";
    cin >> n;

    cout << "Enter the elements:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {

            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n / 2; j++) {

            int temp = mat[i][j];
            mat[i][j] = mat[i][n - j - 1];
            mat[i][n - j - 1] = temp;
        }
    }

    cout << "Rotated Matrix:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
