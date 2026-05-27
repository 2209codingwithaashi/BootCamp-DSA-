#include<iostream>
using namespace std;
int main()
{
	int n,a[50];
	cout<<"Enter the size : ";
	cin>>n;
	cout<<"Enter the elements : "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Leaders are : ";
	int maxRig = a[n-1];
	cout<<maxRig<<" ";
	for(int i = n - 2; i >= 0; i--) {

        if(a[i] > maxRig) {

            maxRig = a[i];
            cout << maxRig << " ";
        }
    }

    return 0;
}

