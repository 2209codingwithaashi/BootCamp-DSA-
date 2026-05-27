#include<iostream>
using namespace std;
int main(){
	int n,arr[100];
	int threshold = n/4;
	cout<<"Enter the size: ";
	cin>>n;
	cout<<"Enter the elements : "<<endl;
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout<<"Elements appear more than once : "<<threshold <<endl;
	for(int i=0;i<n;i++){
		int count=1;
		while(i<n-1&&arr[i]==arr[i+1]){
			count++;
			i++;
		}
		if(count>threshold){
			cout<<"Element "<<arr[i]<<" appears "<<count<<" times ."<<endl;
		}
	}
	return 0;
}
