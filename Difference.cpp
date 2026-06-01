#include<iostream>
using namespace std;
int main(){
	int n,a[50];
	cout<<"Enter the Size : ";
	cin>>n;
	cout<<"Enter the Elements : "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int diff;
	diff = a[0]-a[n-1];
	cout<<"Difference : "<<diff;
	return 0;
}
