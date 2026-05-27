#include<iostream>
using namespace std;
int main(){
	int n,mat[100][100];
	cout<<"Enter size: ";
    cin>>n;
    cout << "Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int fd = 0;
    int sd = 0;
    for(int i=0;i<n;i++){
        fd = fd + mat[i][i];
        sd = sd + mat[i][n - i - 1];
    }

    int diff;
    if(fd > sd) {
    diff = fd - sd;
    }
    else {
    diff = sd - fd;
     }
    cout << "Diagonal Difference = " << diff;

    return 0;
}
