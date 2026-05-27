#include<iostream>
using namespace std;
int main(){
	int n , arr[50];
	cout<<"Enter the size : ";
	cin>>n;
	cout<<"Enter the elements : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int prefix[50];
	prefix[0] = 0;
	for(int i=0;i<=n;i++){
		prefix[i] = prefix [ i-1 ] + arr [ i - 1];
	}
	int l,r;
	cout<<"Enter l and r : ";
	cin>>l>>r;
	int sum;

    if(l == 0)
        sum = prefix[r];
    else
        sum = prefix[r] - prefix[l - 1];

    cout << "Sum = " << sum;
	return 0;
}
