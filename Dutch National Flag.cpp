#include<iostream>
using namespace std;
int main()
{
	int n,arr[50];
	cout<<"Enter the Size : ";
	cin>>n;
	cout<<"Enter elements ( 0,1,2 ) : "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int c0=0,c1=0,c2=0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			c0++;
		}else if(arr[i]==1){
			c1++;
		}else{
			c2++;
		}
	}
	int i=0;
	while(c0>0){
		arr[i] = 0;
		i++;
		c0--;
	}
	while(c1>0){
		arr[i] = 1;
		i++;
		c1--;
	}
	while(c2>0){
		arr[i] = 2;
		i++;
		c2--;
	}
	cout<<"Sorted array : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
