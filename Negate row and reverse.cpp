#include <iostream>

using namespace std;

int main() {
    int r,c,mat[50][50];
    cout<<"Enter the rows: ";
	cin>>r;
	cout<<"Enter the columns: ";
	cin>>c;
	cout<<"Enter the elements : "<<endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
        	cin>>mat[i][j];
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            mat[i][j] = -mat[i][j];
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c / 2; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[i][c - 1 - j];
            mat[i][c - 1 - j] = temp;
        }
    }

    cout << "Matrix(Negated Rows & Reversed Columns): ";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << mat[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}

