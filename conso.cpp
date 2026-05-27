#include<iostream>
using namespace std;
int main()
{
	int r,c,mat[100][100];
	cout<<"enter the rows : ";
	cin>>r;
	cout<<"enter the cols : ";
	cin>>c;
	cout<<"enter the elements : "<<endl;
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			cin>>mat[i][j];
		}
	}
	int sum=0;
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			if(i==0||i==r-1||j==0||j==c-1){
				sum = sum + mat[i][j];
			}
		}
    }
	cout<<"sum of boundary elements = "<<sum;
	
	return 0;
}


