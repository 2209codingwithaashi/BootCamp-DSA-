#include <iostream>
using namespace std;
int main() {
    int mat[10][10], r, c , i;
    cout<<"Enter the rows : ";
    cin>>r;
    cout<<"Enter the columns : ";
    cin>>c;
    cout << "Enter elements:\n";
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin >> mat[i][j];
        }
    }
    int maxSum = 0;
    int rowIndex = 0;
    for(int i=0;i<r;i++){
        int sum = 0;
        for(int j=0;j<c;j++){
            sum = sum + mat[i][j];
        }
        if(sum > maxSum) {
            maxSum = sum;
            rowIndex = i;
        }
    }
    cout << "Highest row sum = " << maxSum << endl;
    cout << "Deleting row = " << rowIndex << endl;
    for(int i=rowIndex; i<r-1; i++) {
        for(int j=0; j<c; j++) {
            mat[i][j] = mat[i+1][j];
        }
    }
    r--;
    cout << "Matrix after deleting row:\n";
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cout <<mat[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;
}
